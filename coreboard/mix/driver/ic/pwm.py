import sys

if sys.platform == "pyboard":
    from machine import Pin
    from pyb import Timer

__author__ = 'Clark@Prm'
__version__ = '0.1'

i = (0, 0)


class Constant:
    TIMER3 = 3
    TIMER8 = 8
    TIMER9 = 9
    prescaler = 2
    period = 4200

    TIMER3_CH3 = "PB0"
    TIMER3_CH4 = "PB1"
    TIMER8_CH1 = "PC6"
    TIMER8_CH2 = "PC7"
    TIMER8_CH3 = "PC8"
    TIMER8_CH4 = "PC9"
    TIMER9_CH1 = "PE5"
    TIMER9_CH2 = "PE6"


class PWMGenerator(object):
    '''
    Generat PWM with 10K Samplerate

    Timer1&Timer8 Freq is 168MHz

    TIM1_CH1    PE9
    TIM1_CH2    PE11
    TIM1_CH3    PE13
    TIM1_CH4    PE14
    TIM8_CH1    PC6
    TIM8_CH2    PC7
    TIM8_CH3    PC8
    TIM8_CH4    PC9
    '''

    def __init__(self):
        self._timerList = list()
        self._channelList = list()
        self.module_init()

    def __del__(self):
        for _timer in self._timerList:
            _timer.deinit()
        self._timerList = list()
        self._channelList = list()
        del self._timerList
        del self._channelList

    def module_init(self):
        """
        Init PWM module, and enable 8 channel first, Generate 10KHz Freq
        """
        self._timerList = list()
        self._channelList = list()
        assert self.__init_timer(Constant.TIMER3)
        assert self.__init_timer(Constant.TIMER8)
        assert self.__init_timer(Constant.TIMER9)
        return "done"

    def __init_timer(self, timerNumber):
        objTimer = Timer(timerNumber)
        if timerNumber == Constant.TIMER8 or timerNumber == Constant.TIMER9:
            objTimer.init(prescaler=Constant.prescaler - 1, period=Constant.period * 2 - 1)
        else:
            objTimer.init(prescaler=Constant.prescaler - 1, period=Constant.period - 1)
        if timerNumber == Constant.TIMER3:
            ch = objTimer.channel(3, Timer.PWM, pin=Pin(Constant.TIMER3_CH3))
            self._channelList.append(ch)
            ch = objTimer.channel(4, Timer.PWM, pin=Pin(Constant.TIMER3_CH4))
            self._channelList.append(ch)
        elif timerNumber == Constant.TIMER8:
            for i in range(0, 4):
                ch = objTimer.channel(i + 1, Timer.PWM, pin=Pin("PC{}".format(6 + i)))
                self._channelList.append(ch)
        elif timerNumber == Constant.TIMER9:
            for i in range(0, 2):
                ch = objTimer.channel(i + 1, Timer.PWM, pin=Pin("PE{}".format(5 + i)))
                self._channelList.append(ch)
        self._timerList.append(objTimer)
        return True

    def setDutCycleValue(self, channel, value):
        """
        channel: 0~7
        value: 0~8400
        """
        if channel > 1:
            value = value * 2
        assert channel <= len(self._channelList) - 1
        assert 0 <= value <= Constant.period
        timerCh = self._channelList[channel]
        timerCh.pulse_width(value)
        return timerCh.pulse_width()

    def setDutCyclePercent(self, channel, percent):
        """
        accuracy: 0.05%
        channel: 0~7
        percent: 0~100, float
        """

        assert channel <= len(self._channelList) - 1
        assert 0 <= percent <= 100
        if channel <= 1:
            value = int(Constant.period * (percent / 100.0))
        else:
            value = int(Constant.period * 2 * (percent / 100.0))
        timerCh = self._channelList[channel]
        timerCh.pulse_width(value)
        return "done"



