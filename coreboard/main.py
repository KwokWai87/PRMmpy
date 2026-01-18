from mix.lynx.launcher import *
import gc
try:
    import asyncio
except:
    import uasyncio as asyncio


async def runServer():
    try:
        tasks = list()
        ps_led = PSLED()
        if not coreboard_fw_errors:
            ps_led.start_blink()
        tasks.append(XObject.mgmt_server.rpc_server.run())
        tasks = tasks + [_task.server.rpc_server.run() for _task in list(XObject.duts.values())]
        print("Before collect memory size: {}".format(gc.mem_free()))
        gc.collect()
        print('GC Collect')
        print("After collect memory size: {}".format(gc.mem_free()))
        await asyncio.gather(*tasks)
        await asyncio.sleep(1)
    finally:
        ps_led.stop_blink()


if __name__ == '__main__':
    asyncio.run(runServer())

