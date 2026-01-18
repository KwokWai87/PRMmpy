import os
import re
import ospath
import json
import copy
import logging
import inspect
import traceback
from collections import namedtuple
from mix.lynx.cobo import Cobo
from mix.lynx.prmrpc.tcp_server import TCPServerWrapper
import pyb
try:
    import asyncio
except:
    import uasyncio as asyncio

DEFAULT_LOG_FOLDER = '/var/log/'
DEFAULT_HW_FOLDER = "mix/addon/config/hw_profile.json"
DEFAULT_DRIVER_FOLDER = ["mix/driver", 'mix/addon/driver']
DEFAULT_TEST_CASE_FOLDER = 'mix/addon/test_function'
coreboard_fw_errors = []
logger = None
IP_ADDRESS_SETING = ''


class PSLED(object):
    """
    singleton class for PSLED control.
    """
    # singleton instance
    instance = None

    def __new__(cls, *args, **kwargs):
        if not cls.instance:
            cls.instance = super().__new__(cls, *args, **kwargs)
        return cls.instance

    def __init__(self, freq=1):
        """
        Singleton class to control PSLED.
        pyb.Timer[1,14], suggestion use [7,14] 
        """
        self.__value = 0
        self.led = pyb.Pin('PG13', pyb.Pin.OUT)
        self.timer = pyb.Timer(8, freq=freq)
        # half time turn on and turn off
        # one second / freq / blink times / transform ms
        # self.delay_ms = int(1.0 / freq / 2.0 * 1000)

    def toggle(self):
        self.__value = 0 if self.__value else 1
        return self.__value

    def stop_blink(self):
        # self.timer.deinit()
        self.timer.callback(None)

    def start_blink(self):
        self.timer.callback(self.blink)

    def blink(self, timer):
        """
        blink at given frequency in Hz.
        """
        # self.led.on()
        # pyb.delay(self.delay_ms) not async
        # self.led.off()
        self.led.value(self.toggle())


def create_launcher_logger(log_folder):
    '''
    Create launcher logger using given folder.

    Args:
        log_folder: string of folder path, launcher will creat log file in it

    Returns:
        None
    '''
    global logger
    logger = logging.Logger(DEFAULT_LOG_FOLDER)

# create_launcher_logger(DEFAULT_LOG_FOLDER)  # invoke at first_stage_launch func


EEPROMItem = namedtuple('EEPROMItem', 'offset length')
eeprom_table = {
    # PPP, HWPN, CONFIG
    1: [EEPROMItem(0x39, 3), EEPROMItem(0x3f, 9), EEPROMItem(0xaf, 3)],
    # PPP, EEEE, HWREV, CONFIG
    2: [EEPROMItem(0x3, 3), EEPROMItem(0xe, 4), EEPROMItem(0x12, 1),
        EEPROMItem(0x15, 3)]
}

#TODO:
# EEPROM Class didn't write
def read_module_compatible_string(i2c, addr=0x50):
    '''
    Generate a compatible string from given i2c bus and address.

    Will try to create an eeprom instance and read from given offset.
    compatible string of ICI EPEROM format:
    2.6 & 2.7:
        VENDOR-HWMODULEPARTNUMBER-CONFIG
    VENDOR:             offset 0x39-0x3B
    HWMODULEPARTNUMBER: offset 0x3F-0x47
    CONFIG:             offset 0xAF-0xB1,

    2.8.4(eeprom layout v2):
        VENDOR-EEEE-HWREV-CONFIG
    VENDOR:             offset 0x3-0x5
    EEEE:               offset 0xE-0x11
    REV:                offset 0x12
    CONFIG:             offset 0x15-17,

    compatible string example:
            SmartGiant wolverine:
                GQQ-DMM001003-001 (ici 2.6, 2.7)
                GQQ-LTJW-2-001 (ici 2.8.4)
            SmartGiant Cloak with reworked ad7175:
                GQQ-SCP002005-XXX       #XXX is 3 bytes in config field.

    Args:
        i2c: instance supporting i2c read/write; i2c or i2c downstream bus
        addr: eeprom i2c address; by default 0x50 which is defined in ICI.

    Returns:
        compatible string

    Examples:
        comp_str = read_module_compatible_string(i2c)
        # comp_str could be 'GQQ-LTJW-2-001'
    '''
    eeprom = EEPROM(addr, i2c)
    eeprom_rev = eeprom.read(0, 1)[0]
    # get eeprom layout info by version;
    # if not defined, regard as v1 (ici < 2.8.4)
    eeprom_layout_info = eeprom_table.get(eeprom_rev, eeprom_table[1])
    raw_hex_list = [eeprom.read(item.offset, item.length) for item in eeprom_layout_info]
    # ['PPP', 'EEEE', ...]
    str_list = [''.join([chr(i) for i in e]) for e in raw_hex_list]
    compatible_string = '-'.join(str_list)
    return compatible_string

def log_error(msg):
    global coreboard_fw_errors
    logger.error(msg)
    coreboard_fw_errors.append(msg)

class DUT(object):
    '''
    DUT abstraction; contains instances like rpc_server, driver instances
    external programs, etc.
    '''
    def __init__(self, name, profile=None):
        # dut name
        self.name = name
        self.profile = profile
        # dut specific instances
        self.instances = {}
        # external programs
        self.ext_programs = {}
        # rpc server instance
        self.rpc_server = None
        # {'module': pin_controling_module}
        self.power_control_modules = {}

    @classmethod
    def power_on_module(cls, power_control_pin, active_low, module_name):
        power_control_pin.level = 1 if not active_low else 0
        power_control_pin.direction = 'output'
        logger.info('{} powered on.'.format(module_name))

    def power_off_module(self, module_name):
        '''
        Power off given module by toggling power gpio.
        No return value when successfully power off;
        log and return error msg for any problem.
        '''
        '''
        if module_name not in self.instances:
            # for item like 'profile', just skip
            return 'done'
        '''
        # module instance
        module = self.instances[module_name]
        pre_power_down_args = self.profile[module_name].pop('pre_power_down_args', {})
        try:
            if hasattr(module, 'pre_power_down'):
                self.logger.info('{}: module {} pre_power_down().'.format(self.name, module_name))
                module.pre_power_down(**pre_power_down_args)
            else:
                # could be non-module driver intances.
                msg = ('{}: device {} does not have pre_power_down() API.')
                self.logger.info(msg.format(self.name, module_name))

        except Exception as e:
            # stop power off if pre_power_down report exception.
            msg = '{}: Exception found when calling module {}.pre_power_down(); trackback = {}'
            msg = msg.format(self.name, module_name, e)
            self.logger.error(msg)
            return msg

        # only toggle power pin when supported.
        power_pin = self.power_control_modules.get(module_name, None)
        if power_pin:
            try:
                # read profile config to determine setting gpio to low or high.
                active_low = self.profile[module_name].get('2-step-power-on', {}).get('power_active_low', False)
                power_off_level = 1 if active_low else 0
                power_pin.level = power_off_level
                assert power_pin.level == power_off_level
                msg = '{}: module {} powered off; power pin = {}.'
                msg = msg.format(self.name, module_name, power_off_level)
                self.logger.info(msg)
            except Exception as e:
                # ignore any error reported by gpio set; just log.
                msg = '{}: Exception found when powering down module {}; trackback = {}'
                msg = msg.format(self.name, module_name, e)
                self.logger.error(msg)
                return msg
        else:
            msg = ('{}: device {} does not have power_control pin defined '
                   'in profile; skipping turning off power for it.')
            self.logger.info(msg.format(self.name, module_name))

        return 'done'


class XObject():
    '''
    XObject class to create instance and save it to dict
    '''
    _objects = dict()
    _classes = {}

    _modules = {}
    shared_devices = {}
    '''
    # tmp 2-step-power-on instrument module instances
    # used to store when creating the module instance when we don't know which dut it belows to.
    {
        module_instance: power_pin
        ...
    }
    '''
    duts = {}

    # compatible string : class name.
    _compatible = {}

    # mgmt RPC server and DUT RPC servers
    mgmt_server = None
    servers = {}
    cobo = None

    @classmethod
    def get_class(cls, class_name):
        '''
        get class.

        Args:
            class_name: string of class name to get
        Returns:
            class object matching the name.
        '''
        if class_name in cls._classes:
            return cls._classes[class_name]
        # handle case insensitive
        class_name_lower = class_name.lower()
        for k, v in cls._classes.items():
            if k.lower() == class_name_lower:
                return cls._classes[k]
        if class_name in globals():
            return globals()[class_name]

        msg = 'driver class {} not found in driver file or globals();'.format(class_name)
        msg += ' Ensure driver class is defined in /mix/driver folder.'
        log_error(msg)
        raise Exception(msg)

    @classmethod
    def get_class_from_comp_str(cls, comp_str):
        '''
        Return class name for given compatible string.
        '''
        # comp_str is case insensitive as defined in profile spec.
        class_name = cls._compatible.get(comp_str.upper(), None)
        if not class_name:
            msg = 'module compatible string in eeprom [{}] not supported by any class. '
            msg += 'Contact module vendor to check if EEPROM is not correctly programmed '
            msg += 'Or driver support is not ready.'
            msg = msg.format(comp_str)
            log_error(msg)
            raise Exception(msg)

        return class_name

    @classmethod
    def set_class(cls, name, single_class):
        '''
        Save single class, this function save a pair({name:single_class) into the _class dict of XObject

        The stored classes will be used for instantiating obj in function 'create_object'
        Also search class for "compatbile" class var;
        If found, store it in "_compatible" dict for mapping between compatible string and class name.

        Args:
            name: string,   class to set
            single_class: obj,    class to set

        Returns:
            None

        Examples:
            XObject.set_class(single_class)
        '''
        global coreboard_fw_errors
        comp_str = getattr(single_class, 'compatible', [])
        # validate if classes with only case difference exists
        # class with comp str is not limited
        if not comp_str and name not in cls._classes and name.lower() in [k.lower() for k in cls._classes]:
            # find class duplicated
            for k, v in cls._classes.items():
                if name.lower() == k.lower():
                    duplicated_class = v
                    break

            msg = 'class {}({}) regarded as duplicated to {}; contact driver owner.'
            msg = msg.format(single_class, name, duplicated_class)
            raise Exception(msg)

        # search & store compatible string of class.
        comp_str = getattr(single_class, 'compatible', [])
        cls._classes[name] = single_class

        if isinstance(comp_str, str):
            # support compatible = 'xilinx-iic' if driver only support 1 device
            # since it is single value, not a list.
            comp_str = [comp_str]
        for s in comp_str:
            class_for_comp_str = cls._compatible.get(s, None)
            if class_for_comp_str and class_for_comp_str != str(single_class):
                # report error if 1 compatible string is found in 2 different classes.
                msg = ('{}: Compatible string {} defined in both {} and {}; '
                       'confused about which class to use. Please contact driver vendor.')
                msg = msg.format(name, s, class_for_comp_str, str(single_class))
                log_error(msg)
            else:
                # module driver class could duplicate between vendors;
                # adding path to the name to distinguish, like
                # driver.module.wolverine_tt.Wolverine
                # driver.module.sg.wolverine.Wolverine
                class_path_name = str(single_class)
                cls._compatible[s] = class_path_name
                cls._classes[class_path_name] = single_class

    @classmethod
    def create_object(cls, obj_name, class_name, local, *args, **kwargs):
        '''
        Create object if it's not in dict otherwise return which has been saved
        :param     obj_name: string,    object name
        :param     class_name: string,    class name
        :param     local: BOOL, if True, store created instance in XObject.
        :param     *args
        :param     **kwargs
        :returns:   the object been created or get from existed obj dict
                    This obj will be included in xobjects dict
        :example:
            kw = dict()
            kw['dev_name'] = '/dev/i2c-1'
            XObject.create_object('i2c-1', 'I2C', **kw)
        '''
        global coreboard_fw_errors
        msg = 'Creating {} object: {}'.format('local' if local else 'shared', obj_name)
        logger.info(msg)

        # exception handled in outter level (load_objects)
        obj = cls.get_class(class_name)(*args, **kwargs)
        # shared object; put into XObject pool.
        if not local:
            if obj_name in cls._objects:
                msg = 'Error: trying to overwrite existing object {}; '.format(obj_name)
                msg += 'Usually this means same key defined in shared devices and dut.'
                msg += 'Which is highly possible to be unexpected.'
                log_error(msg)
                raise Exception(msg)
            cls._objects[obj_name] = obj
        return obj

    @classmethod
    def get_object(cls, obj_name):
        '''
        Get object
        :param     obj_name: string,    object name
        :return: object specified by the obj_name
        :example:
            XObject.get_object('i2c-1')
        '''
        return cls._objects[obj_name]

    @classmethod
    def set_object(cls, obj_name, obj):
        '''
        Set object
        :param     obj_name: string,    object name
        :param     obj: object,    instance
        :example:
            XObject.set_object('server_name', server)
        '''
        cls._objects[obj_name] = obj

    @classmethod
    def get_all_objects(cls):
        '''
        Get all objects in XObject
        :returns:   a dict include all objects
        :example:
            xobjects = XObject.get_all_objects()
        '''
        return cls._objects

    @classmethod
    def clear_all_objects(cls):
        '''
        clear all objects in XObject
        :example:
            xobjects = XObject.clear_all_objects()
        '''
        cls._objects = {}

    @classmethod
    def update_objects(cls, objects):
        '''
        Update objects with new objects
        :param     objects: dict,    objects to be updated
        :example:
            bus = dict{'i2c_1' : i2c1_obj}
            xobjects = XObject.update_objects(bus)
        '''
        cls._objects.update(objects)

def get_ip_addr(profile):
    global IP_ADDRESS_SETING
    try:
        file = profile['ip_addr_file']
        if ospath.exists(file) is True:
            with open(file, 'r') as f:
                ip_addr = f.readline()
        else:
            ip_addr = profile['default_ip']
            msg = 'IP config file not defined in profile, use default IP: {}'
            msg = msg.format(ip_addr)
            log_error(msg)
    except Exception as e:
        # default IP for missing/invalid/wrong network setting
        # so mac-mini has a chance to talk to coreboard
        msg = 'default IP missing/invalid/wrong network setting;'
        msg += ' Check profile "network" section. traceback: {}'
        msg = msg.format(e)
        # so mac-mini has a chance to talk to coreboard
        log_error(msg + str(e))
        ip_addr = '169.254.1.254'
    IP_ADDRESS_SETING = ip_addr
    return ip_addr

def load_json_file(file):
    '''
        Load json file from given path
        :param     file: string,    the file name of json file
        :returns:  a json format dict
        :example:
            json = load_json_file('profile.json')
        '''
    load_json = {}
    if not ospath.exists(file):
        return load_json
    if ospath.isfile(file) is True:
        with open(file) as jsonfile:
            load_json = json.load(jsonfile)
    return load_json

def read_profile(file):
    '''
    Read profile from given path
    :param     file: string,    the path of profile file
    :returns:  a dict include profile config
    :example:
        profile = read_profile('profile.json')
    '''

    profile = load_json_file(file)
    return profile


def get_name_index_from_str_value(string_value):
    '''
    check if given string_value is an instance reference;
    return instance name and index.
    return None, None if not instance reference.

    i2c_mux.0: return "i2c_mux", 0
    i2c_mux: return "i2c_mux", None
    '''
    # for i2c_mux.0, io_exp.1 and name wo index
    pattern_dot = '@(.+?)(\.([0-9]+))?$'

    ret = re.match(pattern_dot, string_value)
    if not ret:
        return None, None

    # instance reference
    instance_name, _, index = ret.group(1), ret.group(2), ret.group(3)
    index = int(index) if index else None
    msg = '{}: name: {}, index: {}'.format(string_value, instance_name, index)

    logger.info(msg.format(string_value, instance_name, index))
    
    return instance_name, index

def create_object_from_json_dict(name, obj_profile, local=True):
    '''
    Instantiate a object by name and profile
    :param     name: string,    the name of object
    :param     obj_profile: dict/str,   the profile about this object
    :returns:   the object been created; Do not return None.
                When error happens, raise Exception that handled by caller.
    :example:
        Profile = read_profile('profile.json')
        profile = Profile['bus']['axi-bus1']
        obj = create_object_from_json_dict('axi-bus1', profile)
    :use cases:
        obj_profile is string of instance name: return instance referred to
        obj_profile is not dict nor instance name: return as-is
        obj_profile is dict wiout "class" or "allowed": return as-is
        obj_profile is dict with "class": create instance and return it
        obj_profile is dict with "allowed": create instance and return it
        obj_profile is dict with "allowed" and "2-step-power-on": create instance and return it
    '''
    # dict keyword keys
    CLASS = 'class'
    ALLOWED = 'allowed'
    TWO_STEP_POWER_ON = '2-step-power-on'

    # timeout for module driver's pre/post_power_on_init and pre_power_down
    PRE_POWER_ON_INIT_ARGS = 'pre_power_on_init_args'
    POST_POWER_ON_INIT_ARGS = 'post_power_on_init_args'
    PRE_POWER_DOWN_ARGS = 'pre_power_down_args'

    I2C = 'i2c'
    POWER_CONTROL = 'power_control'
    POWER_ACTIVE_LOW = 'power_active_low'
    EEPROM_I2C_ADDR = 'eeprom_i2c_addr'

    global coreboard_fw_errors
    curr_profile = copy.deepcopy(obj_profile)

    # non-dictionary value: could be instance reference
    # or normal json value: number/list/bool/null; just return as-is.
    if not isinstance(curr_profile, dict):
        if isinstance(curr_profile, str):
            # try to treat as instance reference
            instance_name, index = get_name_index_from_str_value(curr_profile)
            if instance_name:
                # search if existing instance has this name
                obj = XObject._objects.get(instance_name, None)
                if obj:
                    if index is not None:
                        return obj[index]
                    else:
                        # no indexing; return instance referred to.
                        return obj
                else:
                    # not found existing instance with given name;
                    # raise Exception for undefined reference.
                    msg = 'Undefined reference: {}: {}'.format(name, curr_profile)
                    log_error(msg)
                    raise Exception(msg)
            else:
                # just string value.
                return curr_profile
        else:
            # non-dict, non-str, could be list
            return curr_profile

    curr_profile.pop('app_config', None)

    # dict without 'class' or 'allowed': normal json dict; just return.
    if CLASS not in curr_profile and ALLOWED not in curr_profile:
        return curr_profile

    class_name = curr_profile.pop(CLASS, None)
    allowed = curr_profile.pop(ALLOWED, None)
    two_step_power_on = curr_profile.pop(TWO_STEP_POWER_ON, {})
    pre_power_on_init_args = curr_profile.pop(PRE_POWER_ON_INIT_ARGS, {})
    post_power_on_init_args = curr_profile.pop(POST_POWER_ON_INIT_ARGS, {})
    # also pop pre_power_down_args
    curr_profile.pop(PRE_POWER_DOWN_ARGS, None)
    if class_name and allowed:
        msg = ('{}: Both "class" and "allowed" defined in profile; '
               'launcher confused about how to determine driver class to use.')
        msg = msg.format(name)
        log_error(msg)
        raise Exception(msg)

    # either "class" or "allowed" is in dict;
    # the other key-value pairs are __init__() kwargs; go through recursivly
    kwargs = {k: create_object_from_json_dict(k, v, local=True) for k, v in curr_profile.items()}
    # 2-step-power-on module:
    if two_step_power_on:
        # 2-step-power-on must be used along with "allowed" list.
        assert allowed, '{}: "allowed" not in profile for 2-step-power-on module'.format(name)
        msg = '{}: "allowed" is not list for 2-step-power-on module'.format(name)
        assert isinstance(allowed, list), msg

        two_step_power_on = load_objects(two_step_power_on, local=True)

        i2c = two_step_power_on.get(I2C, None)
        power_control = two_step_power_on.get(POWER_CONTROL, None)
        # by default power pin is active-high;
        # user could specify if active-low in profile:
        #     "power_active_low": true
        power_active_low = two_step_power_on.get(POWER_ACTIVE_LOW, False)
        # eeprom defaults to 0x50; user can omit in profile.
        eeprom_addr = two_step_power_on.get(EEPROM_I2C_ADDR, 0x50)

        if not i2c:
            msg = ('{}: "2-step-power-on": "i2c" not defined or instantiate failed; '
                   'check profile format.')
            msg = msg.format(name)
            log_error(msg)
            raise Exception(msg)

        if not power_control:
            msg = ('{}: "2-step-power-on": "power_control" not defined or instantiate '
                   'failed; check profile format.')
            msg = msg.format(name)
            log_error(msg)
            raise Exception(msg)

        comp_str = read_module_compatible_string(i2c, eeprom_addr)

        # validate if allowed module defined in profile;
        # allowed list support case insensitive according to profile spec.
        if comp_str not in [comp.upper() for comp in allowed]:
            msg = ('{}: module compatible string in eeprom [{}] not in "allowed" list in profile. '
                   'Module vendor shall confirm if EEPROM is correctly programmed; '
                   'if yes, please contact station DRI to check if this specific module hardware '
                   'is allowed on this station.')
            msg = msg.format(name, comp_str)
            log_error(msg)
            raise Exception(msg)

        obj_class = XObject.get_class_from_comp_str(comp_str)
        logger.info('class from compatible string: {}'.format(obj_class))
    # non-2-step-power-on module: find class from compatible string in "allowed" key.
    elif allowed and isinstance(allowed, str):
        obj_class = XObject.get_class_from_comp_str(allowed)
    elif class_name:
        obj_class = class_name
    else:
        raise Exception('SHALL NOT REACH HERE!')

    # instantiate
    obj = XObject.create_object(name, obj_class, local, **kwargs)
    if obj is None:
        logger.info('create {} obj fail'.format(name))
        return obj
    else:
        logger.info('{} obj created'.format(name))

    # call driver pre_power_on_init;
    if hasattr(obj, 'pre_power_on_init'):
        obj.pre_power_on_init(**pre_power_on_init_args)

    # for 2 step power on module, call pre_power_on_init then power it on.
    if two_step_power_on:
        # must have pre/post_power_on_init(); error out if driver does not have it.
        for item in ['pre', 'post']:
            api = '{}_power_on_init'.format(item)
            msg = ('Expecting module driver to have {} API but not found. '
                   'Please Contact module vendor.')
            assert hasattr(obj, api), msg.format(api)
        # power on
        DUT.power_on_module(power_control, power_active_low, name)

        # store power pin to XObject._modules
        XObject._modules[obj] = power_control

    # call driver post_power_on_init; must-to-have for driver.
    if hasattr(obj, 'post_power_on_init'):
        obj.post_power_on_init(**post_power_on_init_args)
    logger.info('{} post_power_on_init.'.format(name))

    return obj


def create_dut_instances(dut_profile, shared_devices):
    '''
    Create DUT private instances and register to given rpc server.

    Args:
        dut_profile: dict,  json dict node for dut.
        shared_devices: dict, {name: obj}, shared devices for all duts;
                        possibly referenced by DUT instances to be created.

    Returns:
        dict(key: obj_alias, value: obj) contains all objects for this dut
                (to be registered to dut rpc server)

    Examples:
        Profile = read_profile('profile.json')
        shared_devices = load_objects(profile['shared_devices'])
        profile = Profile['duts']['dut1']
        dut_instance = create_dut_instances(profile, shared_devices)
    '''
    global coreboard_fw_errors

    XObject.clear_all_objects()
    XObject.update_objects(shared_devices)
    obj_under_create = {}
    for obj_alias, obj_profile in dut_profile.items():
        if isinstance(obj_profile, dict) and ('class' in obj_profile or 'allowed' in obj_profile):
            obj_under_create[obj_alias] = obj_profile
        elif isinstance(obj_profile, str):
            name, _ = get_name_index_from_str_value(obj_profile)
            if name:
                if name in XObject._objects:
                    obj_under_create[obj_alias] = obj_profile
                else:
                    # not found existing instance with given name;
                    # raise Exception for undefined reference.
                    msg = 'Undefined reference: {}: {}'.format(obj_alias, obj_profile)
                    log_error(msg)
            else:
                XObject.set_object(obj_alias, obj_profile)
        else:
            XObject.set_object(obj_alias, obj_profile)

    dut_objs = load_objects(obj_under_create, local=False)
    dut_objs.update(XObject.get_all_objects())
    return dut_objs

def register_dut_instances(server, instances_to_register):
    '''
    register DUT instances to DUT RPC server
    '''
    try:
        server.register_instance(instances_to_register)
    except Exception as e:
        # Only happen when instances with same prefix and have same public api.
        msg = 'Failure found when registering rpc service for {}; traceback={}'
        msg = msg.format(instances_to_register, traceback.format_exc(e))
        log_error(msg)

def import_module(f):
    '''
    Import module by path, return the imported module
    :param     f: string,   the path of module
    :returns:   module object
    :example:
        module = import_module('/mix/driver/utility/utility.py')
    '''
    module_name, _ = str(f).split(".")
    module_name = module_name.lstrip('/')
    module_name = module_name.replace(ospath.sep, '.')
    try:
        # logger.info('importing {}'.format(module_name))
        exec("import {} as module".format(module_name))
        # module = __import__(module_name)
    except Exception as e:
        msg = 'Exception caught when trying to import {} as module; contact driver owner'
        log_error(msg.format(module_name))
        return None

    return module

def load_test_case(f, objects, server):
    '''
    Loading for single test_case file.
    :param     f: string,   the path to load testcase
    :param     objects: dict,   objects as the params of testcase
    :param     server: object,   rpc server
    :example:
        bus = Xobject.get_all_objects()
        server = RPCServerWrapper(profile['server'], publisher)
        load_test_case('/mix/testcases/testcase.py', bus, server)
    '''
    module = import_module(f)

    if not module:
        # import failed; skip for loading test case
        return
    for name, attr in get_classes_to_load(module):
        # obj = __import__("module.{}(objects)".format(name))
        exec(f'_subCls = module.{name}')
        obj = _subCls(objects)
        logger.info('create {} ok'.format(name))
        server.register_instance({name.lower(): obj})
        objects[name.lower()] = obj

def search_for_module(path):
    '''
    Search and return all python module files from given folder

    Criteria:
        1. name not start with .
        2. not __init__.py
        3. .py or .so
        4. name not contains 'tool' or 'emulator'

    Arguments:
        path: string,   the path to search module

    Return:
        a list include all module file paths

    Example:
        modules = search_for_module('driver')
    '''
    if not path:
        return []
    modules = []
    files = os.listdir(path)
    if '__init__.py' not in files:
        return []

    for f in files:
        if f.startswith('.'):
            # ignore hidden file name starting with .
            # ignore . and ..
            continue
        full_path = ospath.join(path, f)
        if ospath.isdir(full_path):
            # folder
            modules += search_for_module(full_path)
        elif ospath.isfile(full_path):
            # file
            module_name, ext_name = ospath.splitext(f)
            # skip for non-python file
            # .so is for python module built by C++ + pybind11;
            # current Raghu's AID and dock_channels are in this format.
            if ext_name not in ['.mpy','py', 'so']:
                continue
            if module_name.endswith('__init__'):
                # skip for __init__.py
                continue
            if 'tool' in full_path or 'emulator' in full_path:
                # skip tool and emulator
                continue
            modules.append(full_path)
        else:
            msg = 'SHOULD NOT REACH HERE: {} is neither folder nor file.'.format(f)
            raise Exception(msg)

    return modules

def load_test_function_folder(path, objects, server):
    '''
    Load all test functions from given path

    Args:
        path: string,   the path to load testcases
        objects: dict,   shared devices that could be used by test function code
        server: object,   rpc server

    Examples:
        shared = Xobject.get_all_objects()
        server = RPCServerWrapper(profile['server'], publisher)
        load_test_function_folder('test_functions', shared, server)
    '''
    if not path or not ospath.isdir(path):
        msg = 'Test function path {}; skipping loading test functions.'.format(path)
        logger.info(msg)
        return

    logger.info('start loading test cases')
    global coreboard_fw_errors
    test_cases = search_for_module(path)
    while True:
        # retry in a loop to resolve dependency between test function classes.
        # exit loop when no class is instantiated but still have unfinished classes;
        # it means there are problems in these classes that is not dependency problem.
        pending_cases = []
        err_msg = {}
        for f in test_cases:
            try:
                load_test_case(f, objects, server)
            except Exception as e:
                pending_cases.append(f)
                err_msg[f] = e
        if not pending_cases:
            logger.info('Test case loading done.')
            break
        if len(pending_cases) == len(test_cases):
            msg = ('test function error: Not able to create instance for the following '
                   'test case files: {}; '.format(pending_cases))
            lst_err = ['****{}****:\n{} '.format(k, v) for k, v in err_msg.items()]
            msg += ' Error msg : {}'.format('\n'.join(lst_err))
            log_error(msg)
            return

        test_cases = pending_cases

    test = objects.get('test')
    if test:
        test.initialize()

def get_classes_to_load(module):
    '''
    return classes to load for launcher from given imported module.
    return format: [(name, attr), ...]
    module shall not be None.
    '''
    # f = inspect.getsourcefile(module)

    ret = []
    for name, attr in inspect.getmembers(module, inspect.isclass):
        # ignore classes src that is not in drive folder
        try:
            if not hasattr(attr, "rpc_public_api"):
                continue
        except:
            # skip for builtin class which will cause exception at getsource
            continue
        # ignore emulator classes
        if ('emulator' in name.lower() or 'emulator' in
                str(getattr(module, name)).lower()):
            continue
        yield name, attr

def load_module(f):
    '''
    Load module by path
    :param     f: string,   the path of module
    :example:
        load_module('/mix/driver/utility/utility.py')
    '''

    module = import_module(f)
    if not module:
        # import failed; skip for setting class
        return
    logger.info("import module {} success".format(f))
    for name, attr in get_classes_to_load(module):
        logger.info("load module {} success".format(name))
        XObject.set_class(name, attr)

def load_driver_folder(path):
    '''
    Load all python modules recursively in given path

    Args:
        path: string,   the path to be load modules

    Examples:
        load_driver_folder('./driver')
        load_driver_folder(['./driver', './another_folder'])
    '''

    path = [path] if isinstance(path, str) else path
    [[load_module(f) for f in search_for_module(p)] for p in path]

    logger.debug('_compatible dict'.format(XObject._compatible))


def get_args(obj):
    '''
    return a list of objects that is used as argument.
    For example,
    "module": {"i2c": "i2c_1", "gpio": {"class": "GPIO", "arg1": "somearg"}}
    Should return ["i2c_1", "somearg"]
    '''
    # same args should be merged so use set to ensure unique
    args = set()
    if isinstance(obj, dict) and ('class' in obj or 'allowed' in obj):
        for key, value in obj.items():
            if key not in ['local', 'class', 'allowed']:
                args.update(get_args(value))
    elif isinstance(obj, str):
        # string; possible be an instance.
        # remove index and get real instance name:
        obj_name, _ = get_name_index_from_str_value(obj)
        if obj_name:
            args.add(obj_name)
    else:
        # data arg; could not be instance; ignore
        pass

    return args

def sort_key_dependency(keys, dependencies):
    '''
    Return a list sorted by dependency;
    Node is placed after its dependent node.
    [] --> []
    [a, b] --> [b, a] if a depend on b, otherwise [a, b]
    [a, b, c] --> [c, b, a] if a depend b and b depends on c
    '''
    sorted_objects = keys[:]
    for obj, dependency in dependencies.items():
        for k, v in dependencies.items():
            if obj in v:
                dependencies[k].update(dependency)
    for obj in keys:
        if not dependencies[obj]:
            # no dependency: skip
            continue
        sorted_objects.remove(obj)
        # max list index of depended obj;
        # will put the obj after this one.
        max_index = 0
        for d in dependencies[obj]:
            index = sorted_objects.index(d)
            max_index = index if max_index < index else max_index
        # move obj to max_index + 1, after its max dependent node.
        sorted_objects.insert(max_index + 1, obj)

    return sorted_objects

def load_objects(obj_config_dict, local=True):
    global coreboard_fw_errors
    logger.info('Start to init {}'.format(obj_config_dict.keys()))

    success_dict = {}
    # sort the instances by handling dependency.
    # if an object has an argument that is another object,
    # it has dependency and needs to be instance later than the depended obj.

    # dict of each obj's depenedency
    dependencies = {}

    # get each object's dependency;
    # dependency defined as argument that is in dictionary keys.
    for obj in obj_config_dict:
        args = get_args(obj_config_dict[obj])
        dependency = args.intersection(set(obj_config_dict))
        dependencies[obj] = dependency if dependency else set()
        logger.info('{}\'s dependency: {}'.format(obj, dependencies[obj]))

    # create sorted object list to instantiate by putting
    # obj that has dependency to later
    sorted_objects = sort_key_dependency(list(obj_config_dict.keys()), dependencies)

    # create instance based on sorted sequence.
    for name in sorted_objects:
        obj_config = obj_config_dict[name]
        try:
            obj = create_object_from_json_dict(name, obj_config, local=local)
        except Exception as e:
            raise e
            msg = 'Failed to create {}; traceback={}'
            msg = msg.format(name, e)
            log_error(msg)
            continue

        success_dict[name] = obj
        logger.info('created: {}'.format(str(obj)))

    return success_dict

def create_shared_devices(profile_shared_dict):
    # create and return shared devices
    shared_devices = load_objects(profile_shared_dict, local=False)
    shared_devices.update(XObject.get_all_objects())
    return shared_devices

def start_dut_rpc_server(key, profile):
    '''
    Start server
    :param     ctx: object,   zmq context
    :param     key: string,    dut name
    :param     profile: dict,  json profile
    :example:
        ctx = zmq.Context()
        bus_objects.update(XObject.get_all_objects())
        for dut, dut_profile in profile['duts'].iteritems():
            start_dut_rpc_server(bus_objects, dut, dut_profile)
    '''
    logger.info('Creating rpc server for DUT {}'.format(key))
    global coreboard_fw_errors
    # pub_port = profile.get('publisher')
    # if pub_port:
    #     publisher = ZmqPublisher(ctx, pub_port, str(key))
    #     profile.pop('publisher')
    # else:
    #     publisher = NoOpPublisher()

    server_info = profile.pop('server', {})
    site = profile.get('site', 0)
    level = getattr(logging, server_info['level']) \
        if 'level' in server_info else logging.INFO
    log_folder_path = server_info.get('log_folder_path', DEFAULT_LOG_FOLDER)

    # support using "port":8000 instead of "endpoint": "tcp://*:8000"
    # if 'port', use it; else use 'endpoint'
    ip = server_info.get('ip', IP_ADDRESS_SETING)
    port = server_info.get('port', 7801+site)
    server = TCPServerWrapper(ip, port, log_level=level, log_folder_path=log_folder_path, name=str(port))
    return server

def create_dut_rpc_server(duts):
    '''
    Create and return dut rpc servers.
    Register dut rpc server to mgmt server;
    duts: {dut_name: dut_obj}
    '''
    for dut_name, dut in duts.items():
        server = start_dut_rpc_server(dut_name, dut.profile)
        # ensure server.logger is not impacted
        XObject.mgmt_server.register_instance({dut_name: server})
        server.logger = logger
        dut.server = server

def load_profiles(hw_profile, sw_profile=None, defaults=None):
    '''
    Load profile from hw_profile, optional sw_profile and defaults profile.

    server endpoint: tcp://*:port, port = 7801 + site (site is in hw profile)
    test_function_path: test_function
    network: base at 169.254.1.32, read gpio from ici spec.
             Not supported for the moment;
             will be ready along with 2-step-poweron implementation
    programs: None
    '''
    dict_hw_profile = read_profile(hw_profile)
    if not dict_hw_profile:
        msg = 'Hardware profile {} not found!!!'.format(hw_profile)
        log_error(msg)
        raise Exception(msg)
    # sw_profile could be optional if all using defaults.
    dict_sw_profile = read_profile(sw_profile)
    profile = merge_hw_sw_profile(dict_hw_profile, dict_sw_profile, defaults)

    XObject.set_object('profile', profile)
    return profile

def merge_dict(dest, src, overwrite=False):
    '''
    Similar to dict.update, but
    1. merge recursively into sub dictionary
    2. if overwrite is False, which is default setting,
       treat different value in dicts of same key as error instead of overwriting;
       if overwrite is True, value in dest will be updated to that in src.

    Used to merge hardware profile, software profile and default.
    hw profile and sw profile contains different value for same key could
    generate confusion about which one is correct.

    :param dest: dictionary; 1st dict to merge
    :param src: dictionary; 2nd dict to merge
                merge_dict(a, b) == merge_dict(b, a)
    :return: dictionary, merged dict using dest as base.
    '''
    # use dict() here to not modify the original dict.
    dest = dict(dest)
    src = dict(src)
    for k, v in src.items():
        if k not in dest:
            dest[k] = v
        elif k in dest:
            k_dest = dest[k]
            if isinstance(v, dict) and isinstance(k_dest, dict):
                # recursively for dict
                dest[k] = merge_dict(k_dest, v, overwrite)

            else:
                if k_dest != v:
                    # both defined with different value;
                    if not overwrite:
                        # confused which one should use.
                        msg = 'Conflict definition of {} in hardware and software profile!'
                        msg += 'hardware profile: {}; software profile: {}'
                        msg = msg.format(k, k_dest, v)
                        raise Exception(msg)
                    else:
                        # use dest value.
                        pass
                else:
                    # both defined but with same value; just ignore.
                    pass
    return dest

#TODO call CoreBoard Class Cobo
def start_mgmt_server(dict_server_setting, default_log_folder=None):
    '''
    Start server
    :param     ctx: object,   zmq context
    :param     profile: dict,  json profile of "mgmt_server"; contains 3 keys
               "port": rpc port; use 7800 if not correctly defined.
               "log_folder_path": "/var/log/rpc_log" as default.
               "log_level": logging.INFO as default
    '''
    global coreboard_fw_errors
    if 'port' not in dict_server_setting:
        # coreboard_fw_errors.append('port not defined in profile "mgmt_server"; using default 7800')
        logger.info('port not defined in profile "mgmt_server"; using default 7800')
    # TODO default ipaddr is 169.254.1.32
    ip = dict_server_setting.get('ip', IP_ADDRESS_SETING)
    port = dict_server_setting.get('port', 7800)
    log_folder_path = dict_server_setting.get('log_folder_path', default_log_folder)
    log_level = dict_server_setting.get('log_level', logging.INFO)
    logger.info('Creating management rpc server for Coreboard on port {}'.format(port))
    if port > 65535 or port < 0:
        coreboard_fw_errors.append('port {} out of range (0, 65536); using default 7800'.format(port))
        port = 7800
    mgmt_server = TCPServerWrapper(ip, port, log_level=log_level, log_folder_path=log_folder_path, name='mgmt')
    # host it in XObject
    XObject.mgmt_server = mgmt_server
    XObject.cobo = Cobo(xobject=XObject)
    mgmt_server.register_instance({'cobo': XObject.cobo})


def merge_hw_sw_profile(hw, sw, defaults_profile_file=None):
    '''
    Consolidate hw and sw info profile and generated a merged json dictionary.
    Raise exception if any key exists in both profile but with different value:
    User can omit configuring some information if it has default value
    in given defaults profile (/mix/config/defaults.json on coreboard),
    like server endpoints and ip addr file.
    :param hw & sw: hw and sw dictionary; could be generated by read_profile()
    :param defaults_profile_file: file path of defaults profile
    :return: merged dictionary profile.
    '''
    merged = merge_dict(hw, sw)

    # handle defaults: if endpoint is missing, use default setting in given file
    # handle rpc server endpoints:
    duts = merged['duts']

    # validate "site" are different in each dut
    sites = []
    for dut, dut_conf in duts.items():
        site = dut_conf.get('site', None)
        if site in sites:
            msg = '{} has duplicated "site": {}'.format(dut, site)
            raise Exception(msg)
        if site is not None:
            sites.append(site)

    defaults = read_profile(defaults_profile_file)
    logger.info('Profile defaults: {}'.format(defaults))
    if not defaults:
        msg = '{} not present or empty; skipping applying defaults.'
        logger.info(msg.format(defaults_profile_file))
        return merged

    per_dut = defaults.pop('per_dut')
    endpoint_template = per_dut.pop('rpc_server_endpoint')
    endpoint_port_base = per_dut.pop('rpc_server_port_base')
    # default_network = defaults['network']

    merged = merge_dict(merged, defaults, True)

    for dut, setting in duts.items():
        if 'server' in setting and 'endpoint' in setting['server']:
            # user defined; just use it.
            pass
        else:
            # endpoint not defined; generate from "site"
            if 'site' not in setting:
                msg = ('"site" not defined in profile; cannot generate rpc server'
                       ' endpoint from it from defaults.json.')
                raise Exception(msg)
            endpoint = endpoint_template.format(endpoint_port_base + setting['site'])
            setting['server'] = setting.get('server', {})
            setting['server']['endpoint'] = endpoint

        # handle other items like test function path
        duts[dut] = merge_dict(setting, per_dut, True)

    return merged

def first_stage_launch(hw_profile_file,
                       sw_profile_file,
                       defaults_profile_file,
                       log_folder):
    '''
    First stage launch.

    1. start logger
    2. load_profiles
    3. start mgmt RPC server

    Args:
        hw_profile_file: file path of hardware profile
        sw_profile_file: file path of software profile
        defaults_profile_file: file path of defaults profile
        log_folder: log folder for launcher logger and mgmt rpc server.

    Returns:
        None

    Examples:
        hw_profile = '/mix/config/hw_profile.json'
        log_folder = '/var/log/rpc_log'
        defaults = '/mix/config/defaults.json'
        first_stage_launch(hw_profile, None, defaults, log_folder)
    '''
    create_launcher_logger(log_folder)

    profile = load_profiles(hw_profile_file, sw_profile_file, defaults_profile_file)

    # seting global ip address
    get_ip_addr(profile.get('network'))

    start_mgmt_server(profile.pop('mgmt_server', {}), log_folder)


def second_stage_launch(driver_folders):
    '''
    Parse profile to create dut instances and start RPC service

    Args:
        driver_folders: list of driver folder path to load from.

    Returns:
        ret:              the execution result of launch, True for success, False for any error
        servers:          the rpc server instances

    Example:
        ret, servers = second_stage_launch(['/mix/driver', '/mix/addon/driver'])
        # servers could be {'dut0': server_instance} for 1-up profile.
    '''
    ret = True
    global coreboard_fw_errors

    profile = XObject.get_object('profile')

    for driver_folder in driver_folders:
        load_driver_folder(driver_folder)

    # create shared devices and store in XObject
    key_shared_devices = 'shared_devices'
    shared_devices = create_shared_devices(profile.get(key_shared_devices, {}))
    XObject.shared_devices.update(shared_devices)

    # set IP address
    set_network()

    duts_profile = profile['duts']
    duts = {dut_name: DUT(dut_name, profile) for dut_name, profile in duts_profile.items()}
    # dut instance could use launcher logger; currently only power off module event.
    [setattr(dut, 'logger', logger) for dut in duts.values()]

    XObject.duts.update(duts)
    # launch programs for single dut
    # [0] is bool for whether cmd succeed; don't need to save here.
    # [1] is the dict for programs that has been executed.
    # [setattr(dut, 'ext_programs', launch_program(dut.profile.get('programs', {}))[1])
    #  for dut in duts.values()]

    # create DUT instances; {dut_name: dict of instances}
    [setattr(dut, 'instances', create_dut_instances(dut.profile, shared_devices))
     for dut in duts.values()]

     # collect all modules that support power control (2-step-power-on)
    # {'module_name': power_control_pin}
    [
        setattr(dut, 'power_control_modules', {
            name: XObject._modules[device]
            for name, device in dut.instances.items()
            # if is_hashable(device) and device in XObject._modules
            if device in XObject._modules

        })
        for dut in duts.values()
    ]

    # collect modules shared by duts
    XObject.shared_power_control_modules = {
        name: XObject._modules[device]
        for name, device in XObject.shared_devices.items()
        # if is_hashable(device) and device in XObject._modules
        if device in XObject._modules
    }

    # create DUT RPC server, saved in XObjects
    create_dut_rpc_server(duts)
    register_dut_instance(duts)

    load_dut_test_function(duts, shared_devices)

    # setting overall status
    set_coreboard_status(duts)

    return ret, {dut_name: dut.server for dut_name, dut in duts.items()}


def set_coreboard_status(duts):
    # setting overall status
    global coreboard_fw_errors
    coreboard_fw_status = ('error: ' + ', '.join(coreboard_fw_errors)) if coreboard_fw_errors else 'normal'
    for dut_name, dut in duts.items():
        logger.info('setting {} mode to {}'.format(dut_name, coreboard_fw_status))
        dut.server.server_mode = coreboard_fw_status

    # if coreboard_fw_status != 'normal':
    #     ps_led.blink(4)
    # else:
    #     ps_led.on()


def register_dut_instance(duts):
    # register DUT instance
    for dut_name, dut in duts.items():
        # filter dict; dict shall/can not be registered to rpc.
        invalid_list = [int, str, bool, list, dict, type(None)]
        instances_to_register = {k: v for k, v in dut.instances.items() if type(v) not in invalid_list}
        
        register_dut_instances(dut.server, instances_to_register)

def load_dut_test_function(duts, shared_devices):
    for dut_name, dut in duts.items():
        instances = dict(dut.instances)
        instances.update(shared_devices)
        # load test function
        load_test_function_folder(dut.profile.get('test_function_path', DEFAULT_TEST_CASE_FOLDER),
                                  instances, dut.server)

def set_network():
    '''
    Set network
    ip address of coreboard can be configured via external hw setting or config file
    hw setting has high priority than config file
    1. gpio
    User can define 1-5 gpio pins & a base address, ip to config on coreboard = base address + io status
    io status is the io input status read from gpio.
    The 'pins' field in network setting defines which io to read.
    The leading pin in the 'pins' list is the lower bit when converting pins to io status data

    User examples:

    'pins': [0, 1] ==> io status = pin0_input + pin1_input << 1

    assume io status = 0b01, base address = 169.254.1.32

    ip address = 169.254.1.32 + 0b01 = 169.254.1.33

    2. i2c io expander
    User can define 1 io expander device & a base address
    The io status on io expander and base address.
    The 'pins' field in network setting defines which io to read.
    'pins' is a list, The leading element in pins is the lower bit when converting to io status data

    User examples:

    'io_exp': 'cat9555_0'   ==> using pins from cat9555_0 instance defined in 'shared_devices' section
    'pins': [0, 1, 2] ==> io status = pin0_input + pin1_input << 1 + pin3_input << 2

    assume io status = 0b011, base address = 169.254.1.32

    ip address = 169.254.1.32 + 0b011 = 169.254.1.35

    3. config file
    User can define a ip config file path.
    Launcher reads the ip address from the file and use it as coreboard ip

    If all above settings are invalid, launcher will try to read the default ip
     from the network config field and set it as coreboard ip

    If user defined default ip is also in valid, or some error happens and fail to do ip config,
     launch will config the coreboard to ip 169.254.1.254


    Example:
        set_network()
    '''
    global IP_ADDRESS_SETING
    net_num = 0
    ip_addr = ''
    pins = []
    profile = XObject.get_object('profile')
    try:
        # determine coreboard IP Address offset by GPIO pin status.
        # could be pins from Xilinx GPIO IP Core, or pins on IO Expander
        # profile usage:
        #     xilinx GPIO: has "pins": [0, 1], no "io_exp"
        #     IO Expander: has "pins": [0, 1] and "io_exp": "cat9555_0"
        # SmartGiant GPIO IP Core is deprecated so not supported.
        if 'pins' in profile['network']:
            # support pins like [0, 1, 2]
            # and a list of objects like [pin1, pin2, pin3] while
            # pin1/2/3 should be already in profile.
            pins_index = profile['network']['pins']
            # check if Xilinx GPIO or IO Expander
            io_exp_name = profile['network'].get('io_exp', None)
            if io_exp_name:
                #  assert io_exp_name.startswith('@'), 'network io_exp: Not instance reference with leading @.'
                # IO Expander; create Pins; strip leading "@"
                io_exp = XObject.get_object(io_exp_name.lstrip('@'))
                pins = [Pin(io_exp, pin_id, 'input') for pin_id in pins_index]
            else:
                # Xilinx GPIO; create GPIO instances for pins
                pins = [GPIO(pin_id, 'input') for pin_id in pins_index]

            # calculate ip_offset from GPIO reading and add it to ip base
            # if for ip_base = 169.254.1.32 and ip_offset = 2,
            # final ip address will be 169.254.1.32+2 = 169.254.1.34
            ip_offset = 0
            # pins are lsb first: [1, 0, 0, 1, 0] ==> 0b01001 = 9
            for pin in reversed(pins):
                ip_offset *= 2
                ip_offset += pin.get_level()

            base_ip = profile['network']['base_ip']
            addr_list = base_ip.split('.')
            addr_list[-1] = str(int(addr_list[-1]) + ip_offset)
            ip_addr = '.'.join(addr_list)
        elif IP_ADDRESS_SETING:
            # seting global ip address
            ip_addr = IP_ADDRESS_SETING
        elif 'ip_addr_file' in list(profile['network'].keys()):
            file = profile['network']['ip_addr_file']
            if ospath.exists(file) is True:
                f = open(file)
                ip_addr = f.readline()
            else:
                ip_addr = profile['network']['default_ip']
                msg = 'IP config file not defined in profile, use default IP: {}'
                msg = msg.format(ip_addr)
                log_error(msg)
        else:
            ip_addr = profile['network']['default_ip']
            logger.warning('No IP config, use default IP: %s' % ip_addr)
    except Exception as e:
        # default IP for missing/invalid/wrong network setting
        # so mac-mini has a chance to talk to coreboard
        msg = 'default IP missing/invalid/wrong network setting;'
        msg += ' Check profile "network" section. traceback: {}'
        msg = msg.format(e)
        # so mac-mini has a chance to talk to coreboard
        log_error(msg + e.message)
        ip_addr = '169.254.1.254'
    logger.info('IP: {}'.format(ip_addr))
    XObject.cobo.set_ip(ip_addr)


def launcher(hw_profile=DEFAULT_HW_FOLDER,
             module_driver_path=DEFAULT_DRIVER_FOLDER):
    first_stage_launch(hw_profile, None, None, DEFAULT_LOG_FOLDER)
    second_stage_launch(module_driver_path)


launcher()




