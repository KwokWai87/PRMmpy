# -*- coding: utf-8 -*-
import struct


__author__ = 'prm@clark'
__version__ = 'v0.1'


class BoardOperationError(Exception):
    """
    When the board have the hardware operation error, use this raise
    """

    def __init__(self, err):
        Exception.__init__(
            self, "[MixBoard operation exception] %s" % (err))


class BoardArgCheckError(Exception):
    """
    Check parameter results do not conform to the function afferent specification, use this raise
    """

    def __init__(self, err):
        Exception.__init__(
            self, "[MixBoard arg check exception] %s" % (err))


class PRMEeprom(object):
    """
    MIXBoard function class, this is all board parent

    :param     eeprom:             instance/None, Eeprom class instance, if None, will create emulator
    :param     temperature_devcie: instance/None, Temperature class instance, if None will create emulator
    :example:

                      class SCOPE002004(MIXBoard):
                        def __init__(self, ad7177=None, eeprom=None, nct75=None):
                            MIXBoard.__init__(self, eeprom, nct75)

    """
    calibration_info = {
        "mode": {"raw": 0, "cal": 1},
        "default": "cal",
        "start_addr": 0xE0,
        "use_flag": 0x5a,
        "length": 16,
        'cal_lenth': 50
    }

    cal_date_info = {
        'start_addr': 0x59,
        'length': 5
    }

    serialnumber_info = {
        "start_addr": 0x0E,
        "length": 17
    }

    hardware_info = {
        "start_addr": 0x05,
        "length": 9
    }

    device_id = {
        "start_addr": 0x3C,
        "length": 30
    }

    vendor_id = {
        "start_addr": 0x01,
        "length": 3
    }

    _module = 'MIX'

    rpc_public_api = ['version', 'read_eeprom', 'write_eeprom', 'write_id', 'read_id', 'write_vendor_id',
                      'read_vendor_id', 'write_hardware_version', 'read_hardware_version', 'read_serialnumber',
                      'write_serialnumber', 'write_calibration_date', 'read_calibration_date', 'write_calibration_cell',
                      'read_calibration_cell', 'erase_calibration_cell']

    def __init__(self, eeprom=None):
        self._eeprom_device = eeprom

    def version(self):
        """
        MIXBoard get board driver version

        :example:
                version = board.version()
                print(version)
        """
        return __version__

    def read_eeprom(self, address, count=1):
        """
        MIXBoard read data from board eeprom, and return list,element for byte data

        :param       address:      hex(0-0xFFFF),  eeprom memory address
        :param       count:        int(0-1024),    Count of datas to be read
        :example:
                            data = board.read_eeprom(0x00, 3)
                            print(data)
        """
        return self._eeprom_device.read(address, count)

    def write_eeprom(self, address, data_list):
        """
        MIXBoard write data to board eeprom

        :param        address:     hex(0-0xFFFF),  eeprom memeroy address
        :param        data_list:   int,            element for byte data, which you want to write into eeprom
        :example:
                            board.write_eeprom(0x00, [0x01, 0x02, 0x03])
        """
        self._eeprom_device.write(address, data_list)
        return "done"

    def write_id(self, device_id):
        """
        MIXBoard write device id to eeprom

        :param         device_id: string, Max length is 16 character,'\0' do not contain and not write to eeprom.
        :example:
                        board.write_device_id("000")
        """
        device_id = str(device_id)
        if len(device_id) > self.device_id['length']:
            raise BoardArgCheckError("the max character length is %s, write data[%s]: \'%s\'" % (
                self.device_id['length'],
                len(device_id), device_id))
        data_list = [ord(x) for x in device_id]
        if len(data_list) < self.device_id['length']:
            data_list += [0x00]
        self.write_eeprom(self.device_id['start_addr'], data_list)
        return "done"

    def read_id(self):
        """
        MIXBoard read device id to eeprom

        :example:
                        board.read_device_id()
        """
        data_list = self.read_eeprom(
            self.device_id['start_addr'], self.device_id['length'])

        device_id = ""
        for data in data_list:
            if data == 0x00:
                break

            # if data > 0x7f, it not a acsii character
            if data & 0x80 != 0x00:
                device_id += '?'
            else:
                device_id += chr(data)
        return device_id

    def write_vendor_id(self, vendor_id):
        """
        MIXBoard write vendor id to eeprom

        :param         vendor_id: string, Max length is 16 character,'\0' do not contain and not write to eeprom.
        :example:
                        board.write_vendor_id("PRM")
        """
        vendor_id = str(vendor_id)
        if len(vendor_id) > self.vendor_id['length']:
            raise BoardArgCheckError("the max character length is %s, write data[%s]: \'%s\'" % (
                self.vendor_id['length'],
                len(vendor_id), vendor_id))
        data_list = [ord(x) for x in vendor_id]
        if len(data_list) < self.vendor_id['length']:
            data_list += [0x00]
        self.write_eeprom(self.vendor_id['start_addr'], data_list)
        return "done"

    def read_vendor_id(self):
        """
        MIXBoard read vendor id to eeprom

        :example:
                        board.read_vendor_id()
        """
        data_list = self.read_eeprom(
            self.vendor_id['start_addr'], self.vendor_id['length'])

        vendor_id = ""
        for data in data_list:
            if data == 0x00:
                break

            # if data > 0x7f, it not a acsii character
            if data & 0x80 != 0x00:
                vendor_id += '?'
            else:
                vendor_id += chr(data)

        return vendor_id

    def write_hardware_version(self, hardware_version):
        """
        MIXBoard write hardware version to eeprom

        :param         hardware_version: string, Max length is 16 character,'\0' do not contain and not write to eeprom.
        :example:
                        board.write_hardware_version("v0.1")
        """
        hardware_version = str(hardware_version)
        if len(hardware_version) > self.hardware_info['length']:
            raise BoardArgCheckError("the max character length is %s, write data[%s]: \'%s\'" % (
                self.hardware_info['length'],
                len(hardware_version), hardware_version))
        data_list = [ord(x) for x in hardware_version]
        if len(data_list) < self.hardware_info['length']:
            data_list += [0x00]

        self.write_eeprom(self.hardware_info['start_addr'], data_list)
        return "done"

    def read_hardware_version(self):
        """
        MIXBoard read hardware version from eeprom

        :example:
                            version = board.read_hardware_version()
                            print(version)
        """

        data_list = self.read_eeprom(
            self.hardware_info['start_addr'], self.hardware_info['length'])

        hardware_version = ""
        for data in data_list:
            if data == 0x00:
                break

            # if data > 0x7f, it not a acsii character
            if data & 0x80 != 0x00:
                hardware_version += '?'
            else:
                hardware_version += chr(data)

        return hardware_version

    def read_serialnumber(self):
        """
        MIXBoard read board serial-number: (247,59)

        :example:
                            sn = board.read_serialnumber()
                            print(sn)
        """

        data_list = self.read_eeprom(
            self.serialnumber_info["start_addr"], self.serialnumber_info["length"])
        serialnumber = ""
        for index in range(0, len(data_list)):
            if data_list[index] == 0x00:
                break
            de_crypt = data_list[index]
            if de_crypt & 0x80 != 0x00:
                raise BoardOperationError(
                    "the serialnumber in eeprom is not prmeasure writed: %s" % (str(data_list)))
            serialnumber += chr(de_crypt)

        return serialnumber

    def write_serialnumber(self, serialnumber):
        """
        MIXBoard write serial-number to board, only use for smartgiant
        :param       serialnumber:         string, max length is 32 character,
                                                   '\0' do not contain and not write to eeprom.
        :example:
                            board.write_serialnumber("20180101")
        """
        serialnumber = str(serialnumber)
        if len(serialnumber) > self.serialnumber_info["length"]:
            msg = "the serialnumber is too long, or the max character length is 17, "
            msg += "the write serialnumber:  \'%s\'" % (serialnumber)
            raise BoardArgCheckError(msg)

        data_list = []
        for index in range(0, len(serialnumber)):
            data_list += [ord(serialnumber[index])]

        if len(data_list) < self.serialnumber_info["length"]:
            data_list += [0x00]

        self.write_eeprom(self.serialnumber_info["start_addr"], data_list)
        return "done"

    def write_calibration_date(self, date):
        """
        MIXBoard write calibration data write date time

        :param         date: string, max length is 16 character,'\0' do not contain and not write to eeprom.
        :example:
                        board.write_calibration_date("C8425")
        """
        date = str(date)
        if len(date) > self.cal_date_info['length']:
            msg = "calibration date data type is not str type or char bytes, "
            msg += "or the max character length is "
            msg += "%s, write data: \'%s\'" % (self.cal_date_info['length'], date)
            raise BoardArgCheckError(msg)

        data_list = [ord(x) for x in date]
        if len(data_list) < self.cal_date_info['length']:
            data_list += [0x00]

        self.write_eeprom(self.cal_date_info['start_addr'], data_list)
        return "done"

    def read_calibration_date(self):
        """
        MIXBoard read calibration data write date time

        :example:
                            result = board.read_calibration_date()
                            print(result)
        """
        data_list = self.read_eeprom(
            self.cal_date_info['start_addr'], self.cal_date_info['length'])

        date_time = ""
        for data in data_list:
            if data == 0x00:
                break

            # if data > 0x7f, it not a acsii character
            if data & 0x80 != 0x00:
                date_time += '?'
            else:
                date_time += chr(data)
        return date_time

    def write_calibration_cell(self, unit_index, gain, offset, threshold):
        """
        MIXBoard calibration data write

        :param       unit_index:   int,    calibration unit index
        :param       gain:         float,  calibration gain
        :param       offset:       float,  calibration offset
        :param       threshold:    float,  if value < threshold, use this calibration unit data
        :example:
                            board.write_calibration_cel(0, 1.1, 0.1, 100)

        :calibration unit format:
                            Meaning:    Gain,     Offset,   threshold value, Use flag
                            Mem size:   4Bytes,   4Bytes,   4Bytes,            Byte
                            Data type:  float,    float,    float,            uint8_t
                            Formula:    Y = Gain * X  + Offset
        """
        if not isinstance(unit_index, int) or unit_index < 0:
            raise BoardArgCheckError(
                "calibration unit memory unit_index data type is not int type or unit_index < 0")

        use_flag = self.calibration_info["use_flag"]
        data = (gain, offset, threshold, use_flag, 0xff, 0xff, 0xff)
        pack_data = struct.pack("3fB3B", *data)
        data = struct.unpack("16B", pack_data)
        address = self.calibration_info["start_addr"] + self.calibration_info["length"] * unit_index
        self.write_eeprom(address, list(data))
        return "done"

    def read_calibration_cell(self, unit_index):
        """
        MIXBoard read calibration data

        :param             unit_index: int, calibration unit index
        :example:
                            data = board.read_calibration_cel(0)
                            print(data)

        :calibration unit format:
                            Meaning:    Gain,     Offset,   threshold value, Use flag
                            Mem size:   4Bytes,   4Bytes,   4Bytes,            Byte
                            Data type:  float,    float,    float,            uint8_t
                            Formula:    Y = Gain * X  + Offset
        """
        if not isinstance(unit_index, int) or unit_index < 0:
            raise BoardArgCheckError(
                "calibration unit memory unit_index data type is not int type or unit_index < 0")

        address = self.calibration_info["start_addr"] + self.calibration_info["length"] * unit_index
        data = self.read_eeprom(address, self.calibration_info["length"])

        pack_data = struct.pack("16B", *data)
        result = struct.unpack("3fB3B", pack_data)
        use_flag = result[3]
        if self.calibration_info["use_flag"] != use_flag:
            return {"gain": 1.0, "offset": 0.0, "threshold": 0.0, "is_use": False}
        else:
            return {"gain": result[0], "offset": result[1], "threshold": result[2], "is_use": True}

    def erase_calibration_cell(self, unit_index):
        """
        MIXBoard erase calibration unit

        :example:
                            board.erase_calibration_cell(0)
        """
        if not isinstance(unit_index, int) or unit_index < 0:
            raise BoardArgCheckError(
                "calibration unit memory unit_index data type is not int type or unit_index < 0")

        data = [0xff for i in range(16)]
        address = self.calibration_info["start_addr"] + self.calibration_info["length"] * unit_index
        self.write_eeprom(address, data)
        return "done"