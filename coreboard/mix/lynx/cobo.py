# -*- coding: utf-8 -*-
import os
import re
import gc
import ospath
import ubinascii
import uuid
import ujson as json
import time
import wave
# import base64
import ctypes
import socket
import utarfile as tarfile
from machine import RTC, SPI, Pin
# import platform
# import traceback
# from subprocess import PIPE, Popen
# from threading import Thread
# import re
# from itertools import takewhile

import network

MIX_FW_VERSION_FILE = '/mix/version.json'
# whitelist for get_file/send_file through RPC
# ~ is for debug; /tmp is ramdisk for temp file;
# /var/fw_update/upload is firmware update folder.
# /var/log/rpc_log is log folder.
ALLOWED_FOLDER_SEND_FILE = ['~', '/tmp', '/var/fw_update/upload']
ALLOWED_FOLDER_GET_FILE = ['~', '/tmp', '/var/log/rpc_log']


# def _delayed_shutdown(delay):
#     '''
#     internal function run in a thread that shutdown linux in given seconds.
#     '''
#     time.sleep(delay)
#     os.system('shutdown -P now')


# def _delayed_reboot(delay):
#     '''
#     internal function run in a thread that reboot linux in given seconds.
#     '''
#     time.sleep(delay)
#     os.system('reboot')


class Cobo(object):
    '''
    Xavier class providing APIs for xavier management like send file and set rtc.

    Args:
        log_folder: string, system log folder, for getting log RPC API.
        xobject: xobject instance, for power off module.

    Examples:
        xavier.Xaxier(xobject=xobject)
    '''
    rpc_public_api = ['get_rtc', 'set_rtc', 'get_ip', 'set_ip', 'test', "prmfree",
                      'get_file', 'send_file', 'get_ip_store_file', 'pressure_test']

    ipaddr_path = 'boot/ip_addr'

    DEFAULT_IP_ADDR_PATH = "boot/ip_addr_conf.log"
    DEFAULT_PROFILE_PATH = "mix/config/profile.json"

    def __init__(self, log_folder='var/log/rpc_log', xobject=None):
        # xobject: will use dut.power_control_modules and dut.instances
        # for powering off module.
        self.xobject = xobject
        self.rtc = RTC()
        self.log_folder = ospath.expanduser(log_folder)
        # self.nic = network.WIZNET5K(SPI(2, baudrate=42000000), Pin('PB12'), Pin('PF7'))
        # self.nic = network.WIZNET5K(SPI(2, baudrate=25000000), Pin('PB12'), Pin('PF7'))

    def pressure_test(self, *args, **kwargs):

        return args[0]

    def test(self, wavtempfile="tmp/test.wav", port=7901):
        from tcpClient import TcpClient
        start1_time = time.ticks_ms()
        client=TcpClient("169.254.1.99", port)
        # time.sleep_ms(200)
        wav = open(wavtempfile, 'rb')
        # pos = wav.seek(44)
        wav_samples = bytearray(2048)
        wav_samples_mv = memoryview(wav_samples)
        print("init: {}ms".format(time.ticks_ms()-start1_time))
        start_time = time.ticks_ms()
        size = 0
        while True:
            try:
                num_read = wav.readinto(wav_samples_mv)
                size += num_read
                num_written = 0
                if num_read == 0:
                    break
                while num_written < num_read:
                    # print(type(wav_samples_mv[num_written:num_read]))
                    num_written += client.send(wav_samples_mv[num_written:num_read])
                    # time.sleep_ms(5)
            except Exception as e:
                raise e
        client.shutdown()
        print("total: {}ms".format(time.ticks_ms() - start_time))
        print("size: {}".format(size))
        return "done"

    def prmfree(self):
        gc.collect()
        return gc.mem_free()

    def set_ip(self, ip_addr):
        '''
        Xavier set ip address

        Args:
            ip_addr: string, ip address to be set.

        Examples:
            xavier.set_ip('169.254.1.32')

        '''
        assert isinstance(ip_addr, str)
        pattern = re.compile("[0-9]*\.[0-9]*\.[0-9]*\.[0-9]*")
        result = pattern.match(ip_addr)
        if result is None:
            raise Exception("{} address not valid".format(ip_addr))
        ip_addr_file = open(self.get_ip_store_file(), "w+")
        ip_addr_file.write(ip_addr)
        ip_addr_file.close()
        # default last 2 bit is difference
        mac_addr = int(ip_addr[-2:])
        nic = network.WIZNET5K(SPI(1, baudrate=25000000), Pin('PF8'), Pin('PF7'), mac_addr)
        while True:
            if nic.isconnected():
                break
            time.sleep(0.5)
        if ip_addr != nic.ifconfig()[0]:
            nic.ifconfig((ip_addr, '255.255.255.0', '169.254.1.1', '8.8.8.8'))
        print("ip is: {}".format(nic.ifconfig()))
        print("nic status: {}".format(nic.isconnected()))


    def get_ip(self):
        '''
        Xavier get ip address

        Examples:
            data = xaiver.get_ip()
            print(data)

        '''
        out = self.nic.ifconfig()
        #TODO: confirm ifconfig format
        pattern = re.compile("([0-9]{1,3}\.){3}[0-9]{1,3}")
        result = pattern.match(out)
        if result is None:
            return ""
        return result.group(0)

    def get_ip_store_file(self):
        try:
            with open(self.DEFAULT_PROFILE_PATH, "r") as f:
                profile = json.load(f)
                return profile.get("network").get("ip_addr_file")
        except Exception:
            return self.DEFAULT_IP_ADDR_PATH

    # def fwup(self):
    #     '''
    #     Do the actual update job.

    #     Currently just reboot Xavier to let shell script work.
    #     Could update to do more in the future.
    #     '''
    #     self.reboot()

    def get_file(self, target, base64_encoding=True):
        '''
        target could be folder path or file path on xavier; '~' is allowed.
        folder of target (file folder or folder itself) should be in whitelist;
        any request outside of whitelist will be rejected.

        Specially:
            server (in a tmp folder).
            target 'log' mean to get the whole rpc log folder

        Args:
            target:          string, file path on xavier.
            base64_encoding: boolean, whether returned data is encoded by base64.

        Returns:
            tuple, 2-item tuple ('PASS', data) or (errmsg, '')

        Raises:
            errmsg should be a string about failure reason.
            data is encoded in base64; client will be responsible
            for decoding it into origin data.

        '''
        # check whitelist
        log_folder = ospath.join(ospath.dirname(ospath.abspath(__file__)), 'log')
        if log_folder not in ALLOWED_FOLDER_GET_FILE:
            ALLOWED_FOLDER_GET_FILE.append(log_folder)

        if not target:
            return 'Invalid target {} to get from server'.format(target), ''

        # handle trailing '/'
        target = target.rstrip(ospath.sep)

        if target == 'log':
            # get the whole log folder.
            target = self.logger.log_folder

        tmp_folder = ''

        # handle "~" in target file/folder
        target = ospath.expanduser(target)

        folder = ospath.dirname(target)
        fn = ospath.basename(target)

        # handle "~" in white list.
        tgz_fn = ''
        allowed_folder = [ospath.expanduser(i) for i in ALLOWED_FOLDER_GET_FILE]
        if ospath.isfile(target):
            # for file, check if it is in allowed folder.
            if folder not in allowed_folder:
                msg = 'Invalid folder {} to get file from; supporting one in {}'
                return msg.format(folder, ALLOWED_FOLDER_GET_FILE), ''
        elif ospath.isdir(target):
            # for folder, check if it is one of the allowed folder.
            if target not in allowed_folder and ospath.dirname(target) not in allowed_folder:
                msg = 'Invalid folder {} to get file from; supporting one in {}'
                return msg.format(folder, ALLOWED_FOLDER_GET_FILE), ''
            # zip folder into tgz file: ~/aaa --> ~/aaa.tgz, /opt/seeing/log --> ~/log.tgz
            home = ospath.expanduser('~')
            os.chdir(folder)
            tgz_fn = ospath.join(home, '{}_{}.tgz'.format(fn, uuid.uuid4().hex))
            with tarfile.open(tgz_fn, 'w') as tgz:
                tgz.add(fn)
            # the actual file to transfer is the tgz file.
            target = tgz_fn
        elif not ospath.exists(target):
            return 'Target item to retrieve does not exist: {}'.format(target), ''
        else:
            return 'Target item to retrieve exists but is neither a folder nor a file: {}'.format(target), ''

        with open(target, 'rb') as f:
            data = f.read()

        # cleanup: remove tmp tgz file for folder.
        if tgz_fn:
            os.remove(tgz_fn)

        # cleanup: remove tmp_folder for creating tgz.
        if tmp_folder:
            for f in os.listdir(tmp_folder):
                os.remove(ospath.join(tmp_folder, f))
            os.rmdir(tmp_folder)

        if base64_encoding:
            data = ubinascii.b2a_base64(data)
        return data

    def send_file(self, fn, data, folder):
        '''
        send file from RPC client to RPC server;

        fn should be filename in string;
        data should be base64 encoded raw binary file content.
        the function will write the file into file at predefined location with filename==fn.
        '''
        len_data = len(data)
        if not folder:
            raise Exception('Destination folder not provided.')
        if len_data > 1024 * 1024 * 5:
            # image larger than 5M is highly possible an mistake;
            # usually should be within 100MB wo fs and within 200MB with fs.
            raise Exception('Invalid file size {}; should be smaller than 500MB.'.format(len_data))

        # prevent fn like '../../root/xxx'
        if not fn == ospath.basename(fn):
            raise Exception('Invalid file name {}; should not include any path info.'.format(fn))

        # prevent arbitrary file write.
        folder = folder.rstrip(os.path.sep)
        if folder not in ALLOWED_FOLDER_SEND_FILE:
            msg = 'Invalid destination folder {}; supporting one in {}'
            msg = msg.format(folder, ALLOWED_FOLDER_SEND_FILE)
            raise Exception(msg)

        # expand to full path for ~
        folder = ospath.expanduser(folder)

        with open(ospath.join(folder, fn), 'wb') as f:
            data = ubinascii.ab2_base64(data)
            # TODO: handle base64 decode error
            f.write(data)

        return 'PASS'

    # def get_linux_boot_log(self, base64_encoding=True):
    #     '''
    #     For RPC boot log folder (default to /var/log/syslog
    #     or /var/log/syslog.*), package the folder into .tgz,
    #     encode it with base64 if requested, and return to host.

    #     Args:
    #         base64_encoding: boolean, default True, whether
    #         returned data is encoded by base64.Use default
    #         True when getting log through RPC.

    #     Returns:
    #         tuple, ('PASS', data).

    #     '''
    #     tmp_folder = '/var/log/boot_log_tmp'
    #     folder = '/var/log'
    #     fn = os.path.basename(tmp_folder)
    #     # Create folder named 'tmp'
    #     if not os.path.exists(tmp_folder):
    #         os.mkdir(tmp_folder)
    #     # Put all boot log file into tmp folder
    #     for root, dirs, files in os.walk(folder):
    #         for f in files:
    #             if 'syslog' in f:
    #                 dst = os.path.join(tmp_folder, os.path.basename(f))
    #                 src = os.path.join(folder, os.path.basename(f))
    #                 with open(src, 'rb') as f_in:
    #                     with open(dst, 'wb') as f_out:
    #                         f_out.write(f_in.read())
    #     os.chdir(folder)
    #     tgz_fn = '{}_{}.tgz'.format(fn, uuid.uuid4().hex)
    #     with tarfile.open(tgz_fn, 'w') as tgz:
    #         tgz.add(fn)
    #     # the actual file to transfer is the tgz file.
    #     target = tgz_fn

    #     with open(target, 'rb') as f:
    #         data = f.read()

    #     # cleanup: remove tmp tgz file for folder.
    #     os.remove(tgz_fn)

    #     # cleanup: remove tmp_folder for creating tgz.
    #     for f in os.listdir(tmp_folder):
    #         os.remove(os.path.join(tmp_folder, f))
    #     os.rmdir(tmp_folder)

    #     if base64_encoding:
    #         data = base64.b64encode(data)

    #     return 'PASS', data

    # def get_all_log(self, base64_encoding=True):
    #     '''
    #     For RPC log folder (default to /var/log/rpc_log), package the folder
    #     into .tgz, encode it with base64 if requested, and return to host.

    #     Args:
    #         target:          string, file path on xavier.
    #         base64_encoding: boolean, default True, whether returned data is encoded by base64.
    #                                   Use default True when getting log through RPC.

    #     Returns:
    #         tuple, ('PASS', data).

    #     '''
    #     return self.get_file('log')

    def get_rtc(self):
        self.rtc.datetime()
        return "{}-{}-{} {}:{}:{}.{:03d}".format(t[0], t[1], t[2], t[4], t[5], t[6], t[7])

    def set_rtc(self, timestamp):
        '''
        placeholder for the moment. Will be replaced with real set_rtc code later on.

        This function will set Xavier Linux system RTC to give value
        And set FPGA RTC to the same give value.

        Args:
            timestamp: float/int, should be seconds from 1970/1/1.

        Returns:
            string, 'PASS' when succeed; Error string in case of any error.

        Examples:
            # client.server_set_rtc(time.time()) will set xavier RTC to current time.
            timestamp = 1538296130  #2018-09-30 16:28:50 CST
            client.server_set_rtc(timestamp)

        '''
        self.logger.info('Setting RTC to {}'.format(timestamp))
        time_list = timestamp
        time_tuple = (time_list[0], time_list[1], time_list[2], time_list[6] + 1, time_list[3],
                      time_list[4], time_list[5], 0)
        self.rtc.datetime(time_tuple)
        return self.get_rtc()

    # def fw_version(self):
    #     '''
    #     return dictionary of mix firmware;

    #     mix fw version is defined in a json file;
    #     Currently in /mix/version.json (MIX_FW_VERSION_FILE).

    #     Returns:
    #         dict, firmware version information.
    #     '''
    #     if not MIX_FW_VERSION_FILE:
    #         raise Exception('MIX_FW_VERSION_FILE not defined.')
    #     with open(MIX_FW_VERSION_FILE, 'rb') as f:
    #         data = f.read()
    #     return json.loads(data)

    # def power_off_all_modules(self):
    #     '''
    #     power off all modules for this Xavier.

    #     Returns:
    #         string, 'done' when all power off succeed; report error msg of that module if it failed to power off.
    #     '''
    #     def power_off_shared_module(module_name):
    #         '''
    #         if obj has pre_power_down(), call it;
    #         if obj has power pin defined in 2-step-power-on, toggle it
    #         '''
    #         shared_devices_profile = self.xobject.get_object('profile').get('shared_devices', {})
    #         module_profile = shared_devices_profile[module_name]
    #         module_obj = self.xobject.shared_devices[module_name]
    #         module_power_pin = self.xobject._modules.get(module_obj, None)
    #         if hasattr(module_obj, 'pre_power_down'):
    #             pre_power_down_args = module_profile.get('pre_power_down_args', {})
    #             try:
    #                 module_obj.pre_power_down(**pre_power_down_args)
    #                 self.logger.info('Shared device {} pre_power_down().'.format(module_name))
    #             except:
    #                 msg = ('Exception found when calling shared module'
    #                        ' {}.pre_power_down(); trackback = {}')
    #                 msg = msg.format(module_name, traceback.format_exc())
    #                 self.logger.error(msg)
    #                 return msg
    #         else:
    #             # could be non-module driver intances.
    #             msg = ('Shared device {} does not have pre_power_down() API.')
    #             self.logger.info(msg.format(module_name))

    #         if module_power_pin:
    #             active_low = module_profile.get('2-step-power-on', {}).get('active_low', False)
    #             try:
    #                 power_off_level = 0 if not active_low else 1
    #                 module_power_pin.level = power_off_level
    #                 module_power_pin.direction = 'output'
    #                 msg = 'Shared device {} powered off; power pin = {}'
    #                 msg = msg.format(module_name, power_off_level)
    #                 self.logger.info(msg)
    #             except:
    #                 # ignore any error reported by gpio set; just log.
    #                 msg = 'Exception found when powering down shared module {}; trackback = {}'
    #                 msg = msg.format(module_name, traceback.format_exc())
    #                 self.logger.error(msg)
    #                 return msg
    #         else:
    #             msg = ('Shared device {} does not have power_control pin '
    #                    'defined in profile; skipping turning off power '
    #                    'for it.')
    #             self.logger.info(msg.format(module_name))

    #         return 'done'

    #     # power off shared modules
    #     profile = self.xobject.get_object('profile')
    #     profile_shared_devices = profile.get('shared_devices', {})
    #     result = [
    #         power_off_shared_module(device)
    #         for device, setting in profile_shared_devices.items()
    #         if 'class' in setting or 'allowed' in setting
    #     ]
    #     failed = ';'.join([ret for i in result if i != 'done'])

    #     # power off dut modules
    #     result = [
    #         [
    #             dut.power_off_module(module_name)
    #             for module_name in dut.instances
    #             if module_name in dut.profile and
    #             isinstance(dut.profile[module_name], dict) and
    #             ('class' in dut.profile[module_name] or 'allowed' in dut.profile[module_name])
    #         ] for dut in self.xobject.duts.values()
    #     ]
    #     failed += ''.join([';'.join([i for i in dut_ret if i is not 'done']) for dut_ret in result])
    #     return failed if failed else 'done'

    # def turn_off_fpga_led(self):
    #     '''
    #     Internal function to turn off FPGA Blue LED by programming empty FPGA image; not exposed on RPC.
    #     '''
    #     os.system('cat /dev/null > /dev/xdevcfg')

    # def shutdown(self):
    #     '''
    #     Power off all modules and shutdown Xavier linux in 3s.

    #     On non-Xavier, which means in test environment, just return done

    #     Returns:
    #         string, shutdown information
    #     '''
    #     ret = self.power_off_all_modules()
    #     if ret is not 'done':
    #         return ret

    #     # successfully power off all module; shutdown linux.
    #     os_str = platform.platform().lower()
    #     # Xavier: Linux-4.0.0.02-xilinx-armv7l-with-Ubuntu-14.04-trusty
    #     if 'xilinx' in os_str and 'linux' in os_str:
    #         self.turn_off_fpga_led()

    #         msg = 'shutting down in 3s!!!!!!!!'
    #         self.logger.info(msg)
    #         thread = Thread(name='delayed_shutdown', target=_delayed_shutdown, args=[3])
    #         thread.start()
    #     else:
    #         msg = 'done'

    #     return msg

    # def reboot(self):
    #     '''
    #     power off all modules and reboot Xavier linux in 3s.

    #     On non-Xavier, which means in test environment, just return done

    #     Returns:
    #         string, shutdown information
    #     '''
    #     ret = self.power_off_all_modules()
    #     if ret is not 'done':
    #         return ret

    #     # successfully power off all module; shutdown linux.
    #     os_str = platform.platform().lower()
    #     # Xavier: Linux-4.0.0.02-xilinx-armv7l-with-Ubuntu-14.04-trusty
    #     if 'xilinx' in os_str and 'linux' in os_str:
    #         self.turn_off_fpga_led()

    #         msg = 'Xavier rebooting in 3s!!!!!!!!'
    #         self.logger.info(msg)
    #         thread = Thread(name='delayed_reboot', target=_delayed_reboot, args=[3])
    #         thread.start()
    #     else:
    #         msg = 'done'

    #     return msg

