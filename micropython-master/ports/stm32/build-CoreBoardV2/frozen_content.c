//
// Content for MICROPY_MODULE_FROZEN_STR
//
#include <stdint.h>
const char mp_frozen_str_names[] = {
"\0"};
const uint32_t mp_frozen_str_sizes[] = {
0};
const char mp_frozen_str_content[] = {
"\0"};
//
// Content for MICROPY_MODULE_FROZEN_MPY
//
#include "py/mpconfig.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/emitglue.h"
#include "py/nativeglue.h"

#if MICROPY_LONGINT_IMPL != 2
#error "incompatible MICROPY_LONGINT_IMPL"
#endif

#if MPZ_DIG_SIZE != 16
#error "incompatible MPZ_DIG_SIZE"
#endif

#if MICROPY_PY_BUILTINS_FLOAT
typedef struct _mp_obj_float_t {
    mp_obj_base_t base;
    mp_float_t value;
} mp_obj_float_t;
#endif

#if MICROPY_PY_BUILTINS_COMPLEX
typedef struct _mp_obj_complex_t {
    mp_obj_base_t base;
    mp_float_t real;
    mp_float_t imag;
} mp_obj_complex_t;
#endif

enum {
    MP_QSTR_uasyncio_slash___init___dot_py = MP_QSTRnumber_of,
    MP_QSTR_core,
    MP_QSTR___version__,
    MP_QSTR_funcs,
    MP_QSTR_wait_for,
    MP_QSTR_gather,
    MP_QSTR_event,
    MP_QSTR_Event,
    MP_QSTR_Lock,
    MP_QSTR_stream,
    MP_QSTR__attrs,
    MP_QSTR_attr,
    MP_QSTR_uasyncio_slash_core_dot_py,
    MP_QSTR_ticks,
    MP_QSTR_task,
    MP_QSTR_TimeoutError,
    MP_QSTR_message,
    MP_QSTR_exception,
    MP_QSTR_future,
    MP_QSTR__exc_context,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_IOQueue,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_run_until_complete,
    MP_QSTR_run,
    MP_QSTR__stopper,
    MP_QSTR__stop_task,
    MP_QSTR_Loop,
    MP_QSTR_get_event_loop,
    MP_QSTR_current_task,
    MP_QSTR_new_event_loop,
    MP_QSTR_exc,
    MP_QSTR_t,
    MP_QSTR_sgen,
    MP_QSTR__enqueue,
    MP_QSTR__dequeue,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_wait_io_event,
    MP_QSTR_poller,
    MP_QSTR_s,
    MP_QSTR_idx,
    MP_QSTR_dt,
    MP_QSTR_aw,
    MP_QSTR__io_queue,
    MP_QSTR_call_exception_handler,
    MP_QSTR_main_task,
    MP_QSTR__exc_handler,
    MP_QSTR_run_forever,
    MP_QSTR_set_exception_handler,
    MP_QSTR_get_exception_handler,
    MP_QSTR_default_exception_handler,
    MP_QSTR_future_colon_,
    MP_QSTR_coro_equals_,
    MP_QSTR_loop,
    MP_QSTR_context,
    MP_QSTR_runq_len,
    MP_QSTR_waitq_len,
    MP_QSTR_uasyncio_slash_event_dot_py,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_is_set,
    MP_QSTR_wait,
    MP_QSTR_waiting,
    MP_QSTR__flag,
    MP_QSTR_req,
    MP_QSTR_uasyncio_slash_funcs_dot_py,
    MP_QSTR_wait_for_ms,
    MP_QSTR_return_exceptions,
    MP_QSTR_runner,
    MP_QSTR_waiter,
    MP_QSTR_uasyncio_slash_lock_dot_py,
    MP_QSTR_exc_type,
    MP_QSTR_tb,
    MP_QSTR_uasyncio_slash_stream_dot_py,
    MP_QSTR_Stream,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR_open_connection,
    MP_QSTR_Server,
    MP_QSTR_start_server,
    MP_QSTR_stream_awrite,
    MP_QSTR_wait_closed,
    MP_QSTR_aclose,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_get_extra_info,
    MP_QSTR_readexactly,
    MP_QSTR_drain,
    MP_QSTR_out_buf,
    MP_QSTR_v,
    MP_QSTR_n,
    MP_QSTR_host,
    MP_QSTR__serve,
    MP_QSTR_peername,
    MP_QSTR_cb,
    MP_QSTR_backlog,
    MP_QSTR_sz,
    MP_QSTR_dht_dot_py,
    MP_QSTR_esp,
    MP_QSTR_mimxrt,
    MP_QSTR_DHTBase,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR_measure,
    MP_QSTR_humidity,
    MP_QSTR_temperature,
    MP_QSTR_lcd160cr_dot_py,
    MP_QSTR_PORTRAIT,
    MP_QSTR_LANDSCAPE,
    MP_QSTR_PORTRAIT_UPSIDEDOWN,
    MP_QSTR_LANDSCAPE_UPSIDEDOWN,
    MP_QSTR_STARTUP_DECO_NONE,
    MP_QSTR_STARTUP_DECO_MLOGO,
    MP_QSTR_STARTUP_DECO_INFO,
    MP_QSTR__uart_baud_table,
    MP_QSTR_LCD160CR,
    MP_QSTR_pwr,
    MP_QSTR_i2c,
    MP_QSTR_spi,
    MP_QSTR_i2c_addr,
    MP_QSTR__send,
    MP_QSTR__fcmd2,
    MP_QSTR__fcmd2b,
    MP_QSTR__waitfor,
    MP_QSTR_oflush,
    MP_QSTR_iflush,
    MP_QSTR_rgb,
    MP_QSTR_clip_line,
    MP_QSTR_set_power,
    MP_QSTR_set_orient,
    MP_QSTR_set_brightness,
    MP_QSTR_set_i2c_addr,
    MP_QSTR_set_uart_baudrate,
    MP_QSTR_set_startup_deco,
    MP_QSTR_save_to_flash,
    MP_QSTR_set_pixel,
    MP_QSTR_get_pixel,
    MP_QSTR_get_line,
    MP_QSTR_screen_dump,
    MP_QSTR_screen_load,
    MP_QSTR_set_pos,
    MP_QSTR_set_text_color,
    MP_QSTR_set_font,
    MP_QSTR_set_pen,
    MP_QSTR_erase,
    MP_QSTR_dot,
    MP_QSTR_rect_outline,
    MP_QSTR_rect_interior,
    MP_QSTR_dot_no_clip,
    MP_QSTR_rect_no_clip,
    MP_QSTR_rect_outline_no_clip,
    MP_QSTR_rect_interior_no_clip,
    MP_QSTR_line_no_clip,
    MP_QSTR_poly_dot,
    MP_QSTR_poly_line,
    MP_QSTR_touch_config,
    MP_QSTR_is_touched,
    MP_QSTR_get_touch,
    MP_QSTR_set_spi_win,
    MP_QSTR_fast_spi,
    MP_QSTR_show_framebuf,
    MP_QSTR_set_scroll,
    MP_QSTR_set_scroll_win,
    MP_QSTR_set_scroll_win_param,
    MP_QSTR_set_scroll_buf,
    MP_QSTR_jpeg_start,
    MP_QSTR_jpeg_data,
    MP_QSTR_jpeg,
    MP_QSTR_feed_wdt,
    MP_QSTR_X,
    MP_QSTR_Y,
    MP_QSTR_XY,
    MP_QSTR_YX,
    MP_QSTR_4,
    MP_QSTR_C,
    MP_QSTR_buf16,
    MP_QSTR_buf19,
    MP_QSTR_buf1,
    MP_QSTR_array4,
    MP_QSTR__lt_BBBBBB,
    MP_QSTR_w,
    MP_QSTR_h,
    MP_QSTR_cmd,
    MP_QSTR_fmt,
    MP_QSTR_a0,
    MP_QSTR_a1,
    MP_QSTR_a2,
    MP_QSTR_a3,
    MP_QSTR_a4,
    MP_QSTR_g,
    MP_QSTR_c,
    MP_QSTR__lt_BBB,
    MP_QSTR_orient,
    MP_QSTR__lt_BBW,
    MP_QSTR__lt_BBBBH,
    MP_QSTR_x,
    MP_QSTR_y,
    MP_QSTR__lt_BBBB,
    MP_QSTR__lt_BBBBB,
    MP_QSTR__lt_BBHBBB,
    MP_QSTR__lt_BBHH,
    MP_QSTR_fg,
    MP_QSTR_bg,
    MP_QSTR_font,
    MP_QSTR_scale,
    MP_QSTR_bold,
    MP_QSTR_trans,
    MP_QSTR_x1,
    MP_QSTR_y1,
    MP_QSTR_x2,
    MP_QSTR_y2,
    MP_QSTR_calib,
    MP_QSTR_save,
    MP_QSTR_win,
    MP_QSTR_vec,
    MP_QSTR_pat,
    MP_QSTR_color,
    MP_QSTR_param,
    MP_QSTR__lt_BBH,
    MP_QSTR_l,
    MP_QSTR_lcd160cr_test_dot_py,
    MP_QSTR_lcd160cr,
    MP_QSTR_get_lcd,
    MP_QSTR_show_adc,
    MP_QSTR_test_features,
    MP_QSTR_test_mandel,
    MP_QSTR_test_all,
    MP_QSTR_lcd,
    MP_QSTR__percent_4s_colon__space_,
    MP_QSTR_TEMP,
    MP_QSTR_VBAT,
    MP_QSTR__percent_6_dot_3fV,
    MP_QSTR__percent_5_dot_1f_deg_C,
    MP_QSTR_adc,
    MP_QSTR__percent__dot_2f_space_fps,
    MP_QSTR_in_set,
    MP_QSTR_onewire_dot_py,
    MP_QSTR__ow,
    MP_QSTR_OneWireError,
    MP_QSTR_OneWire,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR_MATCH_ROM,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_select_rom,
    MP_QSTR__search_rom,
    MP_QSTR_required,
    MP_QSTR_rom,
    MP_QSTR_l_rom,
    MP_QSTR_diff,
};

extern const qstr_pool_t mp_qstr_const_pool;
const qstr_pool_t mp_qstr_frozen_const_pool = {
    (qstr_pool_t*)&mp_qstr_const_pool, // previous pool
    MP_QSTRnumber_of, // previous pool size
    10, // allocated entries
    250, // used entries
    {
        (const byte*)"\xc2\xc5\x14" "uasyncio/__init__.py",
        (const byte*)"\xbe\xdb\x04" "core",
        (const byte*)"\x3f\x98\x0b" "__version__",
        (const byte*)"\x08\x6b\x05" "funcs",
        (const byte*)"\x2a\x9f\x08" "wait_for",
        (const byte*)"\x88\x08\x06" "gather",
        (const byte*)"\xc9\x69\x05" "event",
        (const byte*)"\xe9\x8a\x05" "Event",
        (const byte*)"\x8e\xe8\x04" "Lock",
        (const byte*)"\x59\xd4\x06" "stream",
        (const byte*)"\x1a\x5f\x06" "_attrs",
        (const byte*)"\xb6\xbc\x04" "attr",
        (const byte*)"\x03\x56\x10" "uasyncio/core.py",
        (const byte*)"\x43\x08\x05" "ticks",
        (const byte*)"\x28\x9e\x04" "task",
        (const byte*)"\x66\x4b\x0c" "TimeoutError",
        (const byte*)"\x6e\xbc\x07" "message",
        (const byte*)"\xd2\xeb\x09" "exception",
        (const byte*)"\x00\x39\x06" "future",
        (const byte*)"\x24\x33\x0c" "_exc_context",
        (const byte*)"\x39\x31\x12" "SingletonGenerator",
        (const byte*)"\x92\x65\x07" "IOQueue",
        (const byte*)"\x52\x61\x10" "_promote_to_task",
        (const byte*)"\x93\x52\x0b" "create_task",
        (const byte*)"\xef\x93\x12" "run_until_complete",
        (const byte*)"\x6c\x89\x03" "run",
        (const byte*)"\x25\x32\x08" "_stopper",
        (const byte*)"\x10\x16\x0a" "_stop_task",
        (const byte*)"\x19\xe9\x04" "Loop",
        (const byte*)"\x03\x4e\x0e" "get_event_loop",
        (const byte*)"\x1e\x22\x0c" "current_task",
        (const byte*)"\x89\x0c\x0e" "new_event_loop",
        (const byte*)"\xdb\x24\x03" "exc",
        (const byte*)"\xd1\xb5\x01" "t",
        (const byte*)"\x9a\x7d\x04" "sgen",
        (const byte*)"\xc0\x68\x08" "_enqueue",
        (const byte*)"\x6a\xc2\x08" "_dequeue",
        (const byte*)"\x79\xcd\x0a" "queue_read",
        (const byte*)"\x16\x22\x0b" "queue_write",
        (const byte*)"\x24\x1b\x0d" "wait_io_event",
        (const byte*)"\xed\xa4\x06" "poller",
        (const byte*)"\xd6\xb5\x01" "s",
        (const byte*)"\x50\x54\x03" "idx",
        (const byte*)"\x95\x6d\x02" "dt",
        (const byte*)"\x33\x6e\x02" "aw",
        (const byte*)"\xd2\xa9\x09" "_io_queue",
        (const byte*)"\xe8\x4c\x16" "call_exception_handler",
        (const byte*)"\xfc\x7b\x09" "main_task",
        (const byte*)"\x83\xcc\x0c" "_exc_handler",
        (const byte*)"\xcc\x61\x0b" "run_forever",
        (const byte*)"\xa8\x14\x15" "set_exception_handler",
        (const byte*)"\xbc\xec\x15" "get_exception_handler",
        (const byte*)"\x41\xb3\x19" "default_exception_handler",
        (const byte*)"\x3a\x59\x07" "future:",
        (const byte*)"\x09\x52\x05" "coro=",
        (const byte*)"\x39\x24\x04" "loop",
        (const byte*)"\xfa\xd8\x07" "context",
        (const byte*)"\x25\xce\x08" "runq_len",
        (const byte*)"\x87\x55\x09" "waitq_len",
        (const byte*)"\xd4\xe4\x11" "uasyncio/event.py",
        (const byte*)"\x56\x25\x0e" "ThreadSafeFlag",
        (const byte*)"\xc2\xe4\x06" "is_set",
        (const byte*)"\x8e\x55\x04" "wait",
        (const byte*)"\xee\x79\x07" "waiting",
        (const byte*)"\x96\x10\x05" "_flag",
        (const byte*)"\x63\x8b\x03" "req",
        (const byte*)"\xb5\x5f\x11" "uasyncio/funcs.py",
        (const byte*)"\xcb\x61\x0b" "wait_for_ms",
        (const byte*)"\xd4\xb9\x11" "return_exceptions",
        (const byte*)"\xf5\x5b\x06" "runner",
        (const byte*)"\xf9\xec\x06" "waiter",
        (const byte*)"\x93\x27\x10" "uasyncio/lock.py",
        (const byte*)"\xfc\xcb\x08" "exc_type",
        (const byte*)"\x93\x6f\x02" "tb",
        (const byte*)"\x84\xde\x12" "uasyncio/stream.py",
        (const byte*)"\x39\xd8\x06" "Stream",
        (const byte*)"\x9c\x9a\x0c" "StreamReader",
        (const byte*)"\x36\x8b\x0c" "StreamWriter",
        (const byte*)"\xd8\x63\x0f" "open_connection",
        (const byte*)"\xa0\x0b\x06" "Server",
        (const byte*)"\xbf\xf8\x0c" "start_server",
        (const byte*)"\x5a\xe8\x0d" "stream_awrite",
        (const byte*)"\xe3\x72\x0b" "wait_closed",
        (const byte*)"\x52\x60\x06" "aclose",
        (const byte*)"\xf9\xc1\x06" "awrite",
        (const byte*)"\xec\x0a\x09" "awritestr",
        (const byte*)"\xc7\x40\x0e" "get_extra_info",
        (const byte*)"\xc9\x5c\x0b" "readexactly",
        (const byte*)"\x75\x49\x05" "drain",
        (const byte*)"\x85\x75\x07" "out_buf",
        (const byte*)"\xd3\xb5\x01" "v",
        (const byte*)"\xcb\xb5\x01" "n",
        (const byte*)"\x25\x35\x04" "host",
        (const byte*)"\xad\xd8\x06" "_serve",
        (const byte*)"\x80\x20\x08" "peername",
        (const byte*)"\xe4\x6e\x02" "cb",
        (const byte*)"\x6a\xa9\x07" "backlog",
        (const byte*)"\xec\x70\x02" "sz",
        (const byte*)"\x5a\xdd\x06" "dht.py",
        (const byte*)"\x63\x24\x03" "esp",
        (const byte*)"\x12\xf7\x06" "mimxrt",
        (const byte*)"\x28\x6f\x07" "DHTBase",
        (const byte*)"\x5d\x80\x05" "DHT11",
        (const byte*)"\xfd\x80\x05" "DHT22",
        (const byte*)"\x1d\xae\x07" "measure",
        (const byte*)"\x7c\xaf\x08" "humidity",
        (const byte*)"\xe9\xde\x0b" "temperature",
        (const byte*)"\xcf\xa5\x0b" "lcd160cr.py",
        (const byte*)"\xf2\xcd\x08" "PORTRAIT",
        (const byte*)"\xa6\x7b\x09" "LANDSCAPE",
        (const byte*)"\x01\xb5\x13" "PORTRAIT_UPSIDEDOWN",
        (const byte*)"\xd5\x40\x14" "LANDSCAPE_UPSIDEDOWN",
        (const byte*)"\xa7\xaf\x11" "STARTUP_DECO_NONE",
        (const byte*)"\x2b\x04\x12" "STARTUP_DECO_MLOGO",
        (const byte*)"\xc3\x10\x11" "STARTUP_DECO_INFO",
        (const byte*)"\x44\xc8\x10" "_uart_baud_table",
        (const byte*)"\xc8\x0e\x08" "LCD160CR",
        (const byte*)"\x30\x70\x03" "pwr",
        (const byte*)"\x5d\x5f\x03" "i2c",
        (const byte*)"\xcf\x8d\x03" "spi",
        (const byte*)"\x11\x1f\x08" "i2c_addr",
        (const byte*)"\x46\xdc\x05" "_send",
        (const byte*)"\x24\x42\x06" "_fcmd2",
        (const byte*)"\xc6\x86\x07" "_fcmd2b",
        (const byte*)"\xca\x81\x08" "_waitfor",
        (const byte*)"\xce\x08\x06" "oflush",
        (const byte*)"\x08\xd7\x06" "iflush",
        (const byte*)"\xb2\x8a\x03" "rgb",
        (const byte*)"\x22\xd7\x09" "clip_line",
        (const byte*)"\xa7\xfd\x09" "set_power",
        (const byte*)"\xd3\x6a\x0a" "set_orient",
        (const byte*)"\x91\xbe\x0e" "set_brightness",
        (const byte*)"\x8c\xe7\x0c" "set_i2c_addr",
        (const byte*)"\xc5\xd9\x11" "set_uart_baudrate",
        (const byte*)"\x8f\xbe\x10" "set_startup_deco",
        (const byte*)"\x0f\x3f\x0d" "save_to_flash",
        (const byte*)"\xb0\xda\x09" "set_pixel",
        (const byte*)"\xa4\x17\x09" "get_pixel",
        (const byte*)"\x82\x28\x08" "get_line",
        (const byte*)"\x9a\x5d\x0b" "screen_dump",
        (const byte*)"\x10\xea\x0b" "screen_load",
        (const byte*)"\x54\x6d\x07" "set_pos",
        (const byte*)"\x07\xa7\x0e" "set_text_color",
        (const byte*)"\xcb\xd4\x08" "set_font",
        (const byte*)"\x83\x6d\x07" "set_pen",
        (const byte*)"\xe5\x45\x05" "erase",
        (const byte*)"\x3a\x1f\x03" "dot",
        (const byte*)"\xda\x1c\x0c" "rect_outline",
        (const byte*)"\xca\x14\x0d" "rect_interior",
        (const byte*)"\xed\x75\x0b" "dot_no_clip",
        (const byte*)"\x72\x73\x0c" "rect_no_clip",
        (const byte*)"\x8d\x0a\x14" "rect_outline_no_clip",
        (const byte*)"\x9d\x7e\x15" "rect_interior_no_clip",
        (const byte*)"\x5c\x4e\x0c" "line_no_clip",
        (const byte*)"\x6f\x13\x08" "poly_dot",
        (const byte*)"\xfe\x9a\x09" "poly_line",
        (const byte*)"\x15\x99\x0c" "touch_config",
        (const byte*)"\x04\x72\x0a" "is_touched",
        (const byte*)"\x69\xf2\x09" "get_touch",
        (const byte*)"\x9d\x18\x0b" "set_spi_win",
        (const byte*)"\xf0\x3a\x08" "fast_spi",
        (const byte*)"\x75\x65\x0d" "show_framebuf",
        (const byte*)"\x35\xb2\x0a" "set_scroll",
        (const byte*)"\xda\x67\x0e" "set_scroll_win",
        (const byte*)"\x8a\xbd\x14" "set_scroll_win_param",
        (const byte*)"\x1b\x1a\x0e" "set_scroll_buf",
        (const byte*)"\x22\xea\x0a" "jpeg_start",
        (const byte*)"\x52\x10\x09" "jpeg_data",
        (const byte*)"\x7d\xe7\x04" "jpeg",
        (const byte*)"\x3f\x67\x08" "feed_wdt",
        (const byte*)"\xfd\xb5\x01" "X",
        (const byte*)"\xfc\xb5\x01" "Y",
        (const byte*)"\xc4\x75\x02" "XY",
        (const byte*)"\x24\x75\x02" "YX",
        (const byte*)"\x91\xb5\x01" "4",
        (const byte*)"\xe6\xb5\x01" "C",
        (const byte*)"\x53\x70\x05" "buf16",
        (const byte*)"\x5c\x70\x05" "buf19",
        (const byte*)"\xc5\x77\x04" "buf1",
        (const byte*)"\xc8\xc1\x06" "array4",
        (const byte*)"\x19\x0d\x07" "<BBBBBB",
        (const byte*)"\xd2\xb5\x01" "w",
        (const byte*)"\xcd\xb5\x01" "h",
        (const byte*)"\x2f\x4c\x03" "cmd",
        (const byte*)"\x7a\x38\x03" "fmt",
        (const byte*)"\x74\x6e\x02" "a0",
        (const byte*)"\x75\x6e\x02" "a1",
        (const byte*)"\x76\x6e\x02" "a2",
        (const byte*)"\x77\x6e\x02" "a3",
        (const byte*)"\x70\x6e\x02" "a4",
        (const byte*)"\xc2\xb5\x01" "g",
        (const byte*)"\xc6\xb5\x01" "c",
        (const byte*)"\x7b\x8b\x04" "<BBB",
        (const byte*)"\x8e\x81\x06" "orient",
        (const byte*)"\x6e\x8b\x04" "<BBW",
        (const byte*)"\xf1\x4d\x06" "<BBBBH",
        (const byte*)"\xdd\xb5\x01" "x",
        (const byte*)"\xdc\xb5\x01" "y",
        (const byte*)"\x99\xfa\x05" "<BBBB",
        (const byte*)"\xfb\x4d\x06" "<BBBBB",
        (const byte*)"\xd3\xc2\x07" "<BBHBBB",
        (const byte*)"\xd9\xf9\x05" "<BBHH",
        (const byte*)"\x44\x6e\x02" "fg",
        (const byte*)"\xc0\x6e\x02" "bg",
        (const byte*)"\x96\x2b\x04" "font",
        (const byte*)"\x7d\x51\x05" "scale",
        (const byte*)"\x40\x3c\x04" "bold",
        (const byte*)"\x5f\x45\x05" "trans",
        (const byte*)"\x4c\x71\x02" "x1",
        (const byte*)"\x6d\x71\x02" "y1",
        (const byte*)"\x4f\x71\x02" "x2",
        (const byte*)"\x6e\x71\x02" "y2",
        (const byte*)"\xc0\xed\x05" "calib",
        (const byte*)"\xa4\x83\x04" "save",
        (const byte*)"\xb5\x7f\x03" "win",
        (const byte*)"\x75\x7b\x03" "vec",
        (const byte*)"\xe0\x72\x03" "pat",
        (const byte*)"\xd8\x06\x05" "color",
        (const byte*)"\xca\xc8\x05" "param",
        (const byte*)"\x71\x8b\x04" "<BBH",
        (const byte*)"\xc9\xb5\x01" "l",
        (const byte*)"\x46\x96\x10" "lcd160cr_test.py",
        (const byte*)"\xe8\xf0\x08" "lcd160cr",
        (const byte*)"\xc7\x27\x07" "get_lcd",
        (const byte*)"\xdf\x50\x08" "show_adc",
        (const byte*)"\x2b\x6e\x0d" "test_features",
        (const byte*)"\xc3\x88\x0b" "test_mandel",
        (const byte*)"\xad\xc8\x08" "test_all",
        (const byte*)"\xae\x3f\x03" "lcd",
        (const byte*)"\x9d\x48\x05" "%4s: ",
        (const byte*)"\xe9\xd1\x04" "TEMP",
        (const byte*)"\x24\xc4\x04" "VBAT",
        (const byte*)"\x1b\x2a\x06" "%6.3fV",
        (const byte*)"\x7d\x03\x08" "\x25\x35\x2e\x31\x66\xc2\xb0\x43",
        (const byte*)"\x43\x32\x03" "adc",
        (const byte*)"\x7f\x5a\x08" "%.2f fps",
        (const byte*)"\x1f\x11\x06" "in_set",
        (const byte*)"\x0f\xd8\x0a" "onewire.py",
        (const byte*)"\x82\x1f\x03" "_ow",
        (const byte*)"\x50\x5d\x0c" "OneWireError",
        (const byte*)"\x68\xd8\x07" "OneWire",
        (const byte*)"\xa4\x6f\x0a" "SEARCH_ROM",
        (const byte*)"\xb9\x51\x09" "MATCH_ROM",
        (const byte*)"\xcb\x11\x08" "SKIP_ROM",
        (const byte*)"\xe2\x4f\x0a" "select_rom",
        (const byte*)"\xfb\x7e\x0b" "_search_rom",
        (const byte*)"\x2c\x4c\x08" "required",
        (const byte*)"\xb5\x8b\x03" "rom",
        (const byte*)"\x26\xa3\x05" "l_rom",
        (const byte*)"\xc8\xfc\x04" "diff",
    },
};

// frozen bytecode for file uasyncio/__init__.py, scope uasyncio___init____lt_module_gt____getattr__
STATIC const byte fun_data_uasyncio___init____lt_module_gt____getattr__[58] = {
    0x49, 0x0a,
    MP_QSTR___getattr__ & 0xff, MP_QSTR___getattr__ >> 8,
    MP_QSTR_uasyncio_slash___init___dot_py & 0xff, MP_QSTR_uasyncio_slash___init___dot_py >> 8,
    0x00,
    0x12, MP_QSTR__attrs & 0xff, MP_QSTR__attrs >> 8, 
    0x14, MP_QSTR_get & 0xff, MP_QSTR_get >> 8, 
    0xb0, 
    0x51, 
    0x36, 0x02, 
    0xc1, 
    0xb1, 
    0x51, 
    0xde, 
    0x44, 0x07, 0x80, 
    0x12, MP_QSTR_AttributeError & 0xff, MP_QSTR_AttributeError >> 8, 
    0xb0, 
    0x34, 0x01, 
    0x65, 
    0x12, MP_QSTR_getattr & 0xff, MP_QSTR_getattr >> 8, 
    0x12, MP_QSTR___import__ & 0xff, MP_QSTR___import__ >> 8, 
    0xb1, 
    0x51, 
    0x51, 
    0x52, 
    0x81, 
    0x34, 0x05, 
    0xb0, 
    0x34, 0x02, 
    0xc2, 
    0xb2, 
    0x12, MP_QSTR_globals & 0xff, MP_QSTR_globals >> 8, 
    0x34, 0x00, 
    0xb0, 
    0x56, 
    0xb2, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio___init____lt_module_gt____getattr__[1] = {
    MP_ROM_QSTR(MP_QSTR_attr),
};
STATIC const mp_raw_code_t raw_code_uasyncio___init____lt_module_gt____getattr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio___init____lt_module_gt____getattr__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio___init____lt_module_gt____getattr__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 58,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___getattr__,
        .qstr_source_file = MP_QSTR_uasyncio_slash___init___dot_py,
        .line_info = fun_data_uasyncio___init____lt_module_gt____getattr__ + 6,
        .opcodes = fun_data_uasyncio___init____lt_module_gt____getattr__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/__init__.py, scope uasyncio___init___<module>
STATIC const byte fun_data_uasyncio___init____lt_module_gt_[101] = {
    0x10, 0x0a,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_uasyncio_slash___init___dot_py & 0xff, MP_QSTR_uasyncio_slash___init___dot_py >> 8,
    0x00,
    0x81, 
    0x10, MP_QSTR__star_ & 0xff, MP_QSTR__star_ >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x69, 
    0x83, 
    0x80, 
    0x80, 
    0x2a, 0x03, 
    0x16, MP_QSTR___version__ & 0xff, MP_QSTR___version__ >> 8, 
    0x2c, 0x0a, 
    0x10, MP_QSTR_funcs & 0xff, MP_QSTR_funcs >> 8, 
    0x10, MP_QSTR_wait_for & 0xff, MP_QSTR_wait_for >> 8, 
    0x62, 
    0x10, MP_QSTR_funcs & 0xff, MP_QSTR_funcs >> 8, 
    0x23, 0x00, 
    0x62, 
    0x10, MP_QSTR_funcs & 0xff, MP_QSTR_funcs >> 8, 
    0x10, MP_QSTR_gather & 0xff, MP_QSTR_gather >> 8, 
    0x62, 
    0x10, MP_QSTR_event & 0xff, MP_QSTR_event >> 8, 
    0x10, MP_QSTR_Event & 0xff, MP_QSTR_Event >> 8, 
    0x62, 
    0x10, MP_QSTR_event & 0xff, MP_QSTR_event >> 8, 
    0x23, 0x01, 
    0x62, 
    0x10, MP_QSTR_lock & 0xff, MP_QSTR_lock >> 8, 
    0x10, MP_QSTR_Lock & 0xff, MP_QSTR_Lock >> 8, 
    0x62, 
    0x10, MP_QSTR_stream & 0xff, MP_QSTR_stream >> 8, 
    0x23, 0x02, 
    0x62, 
    0x10, MP_QSTR_stream & 0xff, MP_QSTR_stream >> 8, 
    0x23, 0x03, 
    0x62, 
    0x10, MP_QSTR_stream & 0xff, MP_QSTR_stream >> 8, 
    0x23, 0x04, 
    0x62, 
    0x10, MP_QSTR_stream & 0xff, MP_QSTR_stream >> 8, 
    0x23, 0x05, 
    0x62, 
    0x16, MP_QSTR__attrs & 0xff, MP_QSTR__attrs >> 8, 
    0x32, 0x06, 
    0x16, MP_QSTR___getattr__ & 0xff, MP_QSTR___getattr__ >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio___init____lt_module_gt__0 = {{&mp_type_str}, 25035, 11, (const byte*)"\x77\x61\x69\x74\x5f\x66\x6f\x72\x5f\x6d\x73"};
STATIC const mp_obj_str_t const_obj_uasyncio___init____lt_module_gt__1 = {{&mp_type_str}, 9558, 14, (const byte*)"\x54\x68\x72\x65\x61\x64\x53\x61\x66\x65\x46\x6c\x61\x67"};
STATIC const mp_obj_str_t const_obj_uasyncio___init____lt_module_gt__2 = {{&mp_type_str}, 25560, 15, (const byte*)"\x6f\x70\x65\x6e\x5f\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e"};
STATIC const mp_obj_str_t const_obj_uasyncio___init____lt_module_gt__3 = {{&mp_type_str}, 63679, 12, (const byte*)"\x73\x74\x61\x72\x74\x5f\x73\x65\x72\x76\x65\x72"};
STATIC const mp_obj_str_t const_obj_uasyncio___init____lt_module_gt__4 = {{&mp_type_str}, 39580, 12, (const byte*)"\x53\x74\x72\x65\x61\x6d\x52\x65\x61\x64\x65\x72"};
STATIC const mp_obj_str_t const_obj_uasyncio___init____lt_module_gt__5 = {{&mp_type_str}, 35638, 12, (const byte*)"\x53\x74\x72\x65\x61\x6d\x57\x72\x69\x74\x65\x72"};
STATIC const mp_rom_obj_t const_table_data_uasyncio___init____lt_module_gt_[7] = {
    MP_ROM_PTR(&const_obj_uasyncio___init____lt_module_gt__0),
    MP_ROM_PTR(&const_obj_uasyncio___init____lt_module_gt__1),
    MP_ROM_PTR(&const_obj_uasyncio___init____lt_module_gt__2),
    MP_ROM_PTR(&const_obj_uasyncio___init____lt_module_gt__3),
    MP_ROM_PTR(&const_obj_uasyncio___init____lt_module_gt__4),
    MP_ROM_PTR(&const_obj_uasyncio___init____lt_module_gt__5),
    MP_ROM_PTR(&raw_code_uasyncio___init____lt_module_gt____getattr__),
};
const mp_raw_code_t raw_code_uasyncio___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio___init____lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_uasyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 101,
    .n_obj = 6,
    .n_raw_code = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_uasyncio_slash___init___dot_py,
        .line_info = fun_data_uasyncio___init____lt_module_gt_ + 6,
        .opcodes = fun_data_uasyncio___init____lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__CancelledError
STATIC const byte fun_data_uasyncio_core__lt_module_gt__CancelledError[21] = {
    0x00, 0x0a,
    MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__CancelledError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__CancelledError,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_CancelledError,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__CancelledError + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__CancelledError + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__TimeoutError
STATIC const byte fun_data_uasyncio_core__lt_module_gt__TimeoutError[21] = {
    0x00, 0x0a,
    MP_QSTR_TimeoutError & 0xff, MP_QSTR_TimeoutError >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_TimeoutError & 0xff, MP_QSTR_TimeoutError >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__TimeoutError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__TimeoutError,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_TimeoutError,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__TimeoutError + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__TimeoutError + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__SingletonGenerator___init__
STATIC const byte fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___init__[23] = {
    0x11, 0x0a,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x51, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x12, MP_QSTR_StopIteration & 0xff, MP_QSTR_StopIteration >> 8, 
    0x34, 0x00, 
    0xb0, 
    0x18, MP_QSTR_exc & 0xff, MP_QSTR_exc >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator___init__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__SingletonGenerator___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___init__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___init__ + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__SingletonGenerator___iter__
STATIC const byte fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___iter__[9] = {
    0x09, 0x0a,
    MP_QSTR___iter__ & 0xff, MP_QSTR___iter__ >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0xb0, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator___iter__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__SingletonGenerator___iter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___iter__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator___iter__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 9,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___iter__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___iter__ + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___iter__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__SingletonGenerator___next__
STATIC const byte fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___next__[55] = {
    0x21, 0x0a,
    MP_QSTR___next__ & 0xff, MP_QSTR___next__ >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x51, 
    0xde, 
    0xd3, 
    0x44, 0x17, 0x80, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_sorted & 0xff, MP_QSTR_push_sorted >> 8, 
    0x12, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x36, 0x02, 
    0x59, 
    0x51, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x51, 
    0x63, 
    0x51, 
    0xb0, 
    0x13, MP_QSTR_exc & 0xff, MP_QSTR_exc >> 8, 
    0x18, MP_QSTR___traceback__ & 0xff, MP_QSTR___traceback__ >> 8, 
    0xb0, 
    0x13, MP_QSTR_exc & 0xff, MP_QSTR_exc >> 8, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator___next__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__SingletonGenerator___next__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___next__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator___next__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 55,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___next__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___next__ + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator___next__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__SingletonGenerator
STATIC const byte fun_data_uasyncio_core__lt_module_gt__SingletonGenerator[36] = {
    0x00, 0x0a,
    MP_QSTR_SingletonGenerator & 0xff, MP_QSTR_SingletonGenerator >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_SingletonGenerator & 0xff, MP_QSTR_SingletonGenerator >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR___iter__ & 0xff, MP_QSTR___iter__ >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR___next__ & 0xff, MP_QSTR___next__ >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator[3] = {
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__SingletonGenerator___init__),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__SingletonGenerator___iter__),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__SingletonGenerator___next__),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__SingletonGenerator = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_obj = 0,
    .n_raw_code = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_SingletonGenerator,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__SingletonGenerator + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__sleep_ms
STATIC const byte fun_data_uasyncio_core__lt_module_gt__sleep_ms[31] = {
    0xb2, 0x01, 0x0a,
    MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_ticks_add & 0xff, MP_QSTR_ticks_add >> 8, 
    0x12, MP_QSTR_ticks & 0xff, MP_QSTR_ticks >> 8, 
    0x34, 0x00, 
    0x12, MP_QSTR_max & 0xff, MP_QSTR_max >> 8, 
    0x80, 
    0xb0, 
    0x34, 0x02, 
    0x34, 0x02, 
    0xb1, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0xb1, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__sleep_ms[2] = {
    MP_ROM_QSTR(MP_QSTR_t),
    MP_ROM_QSTR(MP_QSTR_sgen),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__sleep_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__sleep_ms,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__sleep_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 31,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_sleep_ms,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__sleep_ms + 7,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__sleep_ms + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__sleep
STATIC const byte fun_data_uasyncio_core__lt_module_gt__sleep[23] = {
    0x21, 0x0a,
    MP_QSTR_sleep & 0xff, MP_QSTR_sleep >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x12, MP_QSTR_int & 0xff, MP_QSTR_int >> 8, 
    0xb0, 
    0x22, 0x87, 0x68, 
    0xf4, 
    0x34, 0x01, 
    0x34, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__sleep[1] = {
    MP_ROM_QSTR(MP_QSTR_t),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__sleep = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__sleep,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__sleep,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_sleep,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__sleep + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__sleep + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue___init__
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue___init__[27] = {
    0x11, 0x0a,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x14, MP_QSTR_poll & 0xff, MP_QSTR_poll >> 8, 
    0x36, 0x00, 
    0xb0, 
    0x18, MP_QSTR_poller & 0xff, MP_QSTR_poller >> 8, 
    0x2c, 0x00, 
    0xb0, 
    0x18, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue___init__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue___init__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue___init__ + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue__enqueue
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue__enqueue[132] = {
    0x4b, 0x0a,
    MP_QSTR__enqueue & 0xff, MP_QSTR__enqueue >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_id & 0xff, MP_QSTR_id >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xb0, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0xdd, 
    0xd3, 
    0x44, 0x3b, 0x80, 
    0x51, 
    0x51, 
    0xb1, 
    0x2b, 0x03, 
    0xc3, 
    0x12, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0xb3, 
    0xb2, 
    0x56, 
    0xb3, 
    0xb0, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0x12, MP_QSTR_id & 0xff, MP_QSTR_id >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x56, 
    0xb0, 
    0x13, MP_QSTR_poller & 0xff, MP_QSTR_poller >> 8, 
    0x14, MP_QSTR_register & 0xff, MP_QSTR_register >> 8, 
    0xb1, 
    0xb2, 
    0x80, 
    0xd9, 
    0x44, 0x09, 0x80, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLIN & 0xff, MP_QSTR_POLLIN >> 8, 
    0x42, 0x06, 0x80, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLOUT & 0xff, MP_QSTR_POLLOUT >> 8, 
    0x36, 0x02, 
    0x59, 
    0x42, 0x2a, 0x80, 
    0xb0, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0x12, MP_QSTR_id & 0xff, MP_QSTR_id >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x55, 
    0xc4, 
    0x12, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0xb4, 
    0xb2, 
    0x56, 
    0xb0, 
    0x13, MP_QSTR_poller & 0xff, MP_QSTR_poller >> 8, 
    0x14, MP_QSTR_modify & 0xff, MP_QSTR_modify >> 8, 
    0xb1, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLIN & 0xff, MP_QSTR_POLLIN >> 8, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLOUT & 0xff, MP_QSTR_POLLOUT >> 8, 
    0xed, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x12, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0x18, MP_QSTR_data & 0xff, MP_QSTR_data >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue__enqueue[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
    MP_ROM_QSTR(MP_QSTR_idx),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue__enqueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue__enqueue,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue__enqueue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 132,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__enqueue,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue__enqueue + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue__enqueue + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue__dequeue
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue__dequeue[33] = {
    0x22, 0x0a,
    MP_QSTR__dequeue & 0xff, MP_QSTR__dequeue >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0x12, MP_QSTR_id & 0xff, MP_QSTR_id >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x53, 
    0x5b, 
    0x56, 
    0xb0, 
    0x13, MP_QSTR_poller & 0xff, MP_QSTR_poller >> 8, 
    0x14, MP_QSTR_unregister & 0xff, MP_QSTR_unregister >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue__dequeue[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue__dequeue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue__dequeue,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue__dequeue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 33,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__dequeue,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue__dequeue + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue__dequeue + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue_queue_read
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_read[18] = {
    0x2a, 0x0a,
    MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0xb0, 
    0x14, MP_QSTR__enqueue & 0xff, MP_QSTR__enqueue >> 8, 
    0xb1, 
    0x80, 
    0x36, 0x02, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue_queue_read[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue_queue_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_read,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue_queue_read,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_queue_read,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_read + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_read + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue_queue_write
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_write[18] = {
    0x2a, 0x0a,
    MP_QSTR_queue_write & 0xff, MP_QSTR_queue_write >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0xb0, 
    0x14, MP_QSTR__enqueue & 0xff, MP_QSTR__enqueue >> 8, 
    0xb1, 
    0x81, 
    0x36, 0x02, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue_queue_write[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue_queue_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_write,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue_queue_write,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_queue_write,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_write + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue_queue_write + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue_remove
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue_remove[79] = {
    0x6a, 0x0a,
    MP_QSTR_remove & 0xff, MP_QSTR_remove >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x51, 
    0xc2, 
    0xb0, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0x5f, 
    0x4b, 0x24, 0x00, 
    0xc3, 
    0xb0, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0xb3, 
    0x55, 
    0x30, 0x03, 
    0xc4, 
    0xc5, 
    0xc6, 
    0xb4, 
    0xb1, 
    0xde, 
    0x43, 0x06, 0x80, 
    0xb5, 
    0xb1, 
    0xde, 
    0x44, 0x09, 0x80, 
    0xb6, 
    0xc2, 
    0x59, 
    0x59, 
    0x59, 
    0x59, 
    0x42, 0x03, 0x80, 
    0x42, 0xd9, 0x7f, 
    0xb2, 
    0x51, 
    0xde, 
    0xd3, 
    0x44, 0x0b, 0x80, 
    0xb0, 
    0x14, MP_QSTR__dequeue & 0xff, MP_QSTR__dequeue >> 8, 
    0xb6, 
    0x36, 0x01, 
    0x59, 
    0x42, 0x03, 0x80, 
    0x42, 0x03, 0x80, 
    0x42, 0xba, 0x7f, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue_remove[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_task),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue_remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue_remove,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue_remove,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 79,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_remove,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue_remove + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue_remove + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue_wait_io_event
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue_wait_io_event[188] = {
    0x62, 0x0a,
    MP_QSTR_wait_io_event & 0xff, MP_QSTR_wait_io_event >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_poller & 0xff, MP_QSTR_poller >> 8, 
    0x14, MP_QSTR_ipoll & 0xff, MP_QSTR_ipoll >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x5f, 
    0x4b, 0xa5, 0x00, 
    0x30, 0x02, 
    0xc2, 
    0xc3, 
    0xb0, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0x12, MP_QSTR_id & 0xff, MP_QSTR_id >> 8, 
    0xb2, 
    0x34, 0x01, 
    0x55, 
    0xc4, 
    0xb3, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLOUT & 0xff, MP_QSTR_POLLOUT >> 8, 
    0xd2, 
    0xef, 
    0x44, 0x19, 0x80, 
    0xb4, 
    0x80, 
    0x55, 
    0x51, 
    0xde, 
    0xd3, 
    0x44, 0x10, 0x80, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0xb4, 
    0x80, 
    0x55, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0xb4, 
    0x80, 
    0x56, 
    0xb3, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLIN & 0xff, MP_QSTR_POLLIN >> 8, 
    0xd2, 
    0xef, 
    0x44, 0x19, 0x80, 
    0xb4, 
    0x81, 
    0x55, 
    0x51, 
    0xde, 
    0xd3, 
    0x44, 0x10, 0x80, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0xb4, 
    0x81, 
    0x55, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0xb4, 
    0x81, 
    0x56, 
    0xb4, 
    0x80, 
    0x55, 
    0x51, 
    0xde, 
    0x44, 0x13, 0x80, 
    0xb4, 
    0x81, 
    0x55, 
    0x51, 
    0xde, 
    0x44, 0x0b, 0x80, 
    0xb0, 
    0x14, MP_QSTR__dequeue & 0xff, MP_QSTR__dequeue >> 8, 
    0xb2, 
    0x36, 0x01, 
    0x59, 
    0x42, 0x2d, 0x80, 
    0xb4, 
    0x80, 
    0x55, 
    0x51, 
    0xde, 
    0x44, 0x14, 0x80, 
    0xb0, 
    0x13, MP_QSTR_poller & 0xff, MP_QSTR_poller >> 8, 
    0x14, MP_QSTR_modify & 0xff, MP_QSTR_modify >> 8, 
    0xb2, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLOUT & 0xff, MP_QSTR_POLLOUT >> 8, 
    0x36, 0x02, 
    0x59, 
    0x42, 0x11, 0x80, 
    0xb0, 
    0x13, MP_QSTR_poller & 0xff, MP_QSTR_poller >> 8, 
    0x14, MP_QSTR_modify & 0xff, MP_QSTR_modify >> 8, 
    0xb2, 
    0x12, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x13, MP_QSTR_POLLIN & 0xff, MP_QSTR_POLLIN >> 8, 
    0x36, 0x02, 
    0x59, 
    0x42, 0x58, 0x7f, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue_wait_io_event[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_dt),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue_wait_io_event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue_wait_io_event,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue_wait_io_event,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 188,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_wait_io_event,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue_wait_io_event + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue_wait_io_event + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__IOQueue
STATIC const byte fun_data_uasyncio_core__lt_module_gt__IOQueue[56] = {
    0x00, 0x0a,
    MP_QSTR_IOQueue & 0xff, MP_QSTR_IOQueue >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_IOQueue & 0xff, MP_QSTR_IOQueue >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR__enqueue & 0xff, MP_QSTR__enqueue >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR__dequeue & 0xff, MP_QSTR__dequeue >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR_queue_write & 0xff, MP_QSTR_queue_write >> 8, 
    0x32, 0x05, 
    0x16, MP_QSTR_remove & 0xff, MP_QSTR_remove >> 8, 
    0x32, 0x06, 
    0x16, MP_QSTR_wait_io_event & 0xff, MP_QSTR_wait_io_event >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__IOQueue[7] = {
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue___init__),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue__enqueue),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue__dequeue),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue_queue_read),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue_queue_write),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue_remove),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue_wait_io_event),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__IOQueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__IOQueue,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 56,
    .n_obj = 0,
    .n_raw_code = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_IOQueue,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__IOQueue + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__IOQueue + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt___promote_to_task
STATIC const byte fun_data_uasyncio_core__lt_module_gt___promote_to_task[28] = {
    0x19, 0x0a,
    MP_QSTR__promote_to_task & 0xff, MP_QSTR__promote_to_task >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_isinstance & 0xff, MP_QSTR_isinstance >> 8, 
    0xb0, 
    0x12, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x34, 0x02, 
    0x44, 0x02, 0x80, 
    0xb0, 
    0x63, 
    0x12, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0xb0, 
    0x34, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt___promote_to_task[1] = {
    MP_ROM_QSTR(MP_QSTR_aw),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt___promote_to_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt___promote_to_task,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt___promote_to_task,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 28,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__promote_to_task,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt___promote_to_task + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt___promote_to_task + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__create_task
STATIC const byte fun_data_uasyncio_core__lt_module_gt__create_task[51] = {
    0x21, 0x0a,
    MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_hasattr & 0xff, MP_QSTR_hasattr >> 8, 
    0xb0, 
    0x10, MP_QSTR_send & 0xff, MP_QSTR_send >> 8, 
    0x34, 0x02, 
    0x43, 0x08, 0x80, 
    0x12, MP_QSTR_TypeError & 0xff, MP_QSTR_TypeError >> 8, 
    0x23, 0x01, 
    0x34, 0x01, 
    0x65, 
    0x12, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0xb0, 
    0x12, MP_QSTR_globals & 0xff, MP_QSTR_globals >> 8, 
    0x34, 0x00, 
    0x34, 0x02, 
    0xc1, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0xb1, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio_core__lt_module_gt__create_task_0 = {{&mp_type_str}, 50473, 18, (const byte*)"\x63\x6f\x72\x6f\x75\x74\x69\x6e\x65\x20\x65\x78\x70\x65\x63\x74\x65\x64"};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__create_task[2] = {
    MP_ROM_QSTR(MP_QSTR_coro),
    MP_ROM_PTR(&const_obj_uasyncio_core__lt_module_gt__create_task_0),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__create_task,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 51,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_create_task,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__create_task + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__create_task + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__run_until_complete
STATIC const byte fun_data_uasyncio_core__lt_module_gt__run_until_complete[343] = {
    0xf1, 0x03, 0x0a,
    MP_QSTR_run_until_complete & 0xff, MP_QSTR_run_until_complete >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0x12, MP_QSTR_Exception & 0xff, MP_QSTR_Exception >> 8, 
    0x2a, 0x02, 
    0xc1, 
    0x12, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0x12, MP_QSTR_StopIteration & 0xff, MP_QSTR_StopIteration >> 8, 
    0x2a, 0x02, 
    0xc2, 
    0x81, 
    0xc3, 
    0x42, 0x3c, 0x80, 
    0x7f, 
    0xc3, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_peek & 0xff, MP_QSTR_peek >> 8, 
    0x36, 0x00, 
    0xc4, 
    0xb4, 
    0x44, 0x18, 0x80, 
    0x12, MP_QSTR_max & 0xff, MP_QSTR_max >> 8, 
    0x80, 
    0x12, MP_QSTR_ticks_diff & 0xff, MP_QSTR_ticks_diff >> 8, 
    0xb4, 
    0x13, MP_QSTR_ph_key & 0xff, MP_QSTR_ph_key >> 8, 
    0x12, MP_QSTR_ticks & 0xff, MP_QSTR_ticks >> 8, 
    0x34, 0x00, 
    0x34, 0x02, 
    0x34, 0x02, 
    0xc3, 
    0x42, 0x0b, 0x80, 
    0x12, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x13, MP_QSTR_map & 0xff, MP_QSTR_map >> 8, 
    0x43, 0x02, 0x80, 
    0x51, 
    0x63, 
    0x12, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_wait_io_event & 0xff, MP_QSTR_wait_io_event >> 8, 
    0xb3, 
    0x36, 0x01, 
    0x59, 
    0xb3, 
    0x80, 
    0xd8, 
    0x43, 0xbe, 0x7f, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_pop_head & 0xff, MP_QSTR_pop_head >> 8, 
    0x36, 0x00, 
    0xc4, 
    0xb4, 
    0x17, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0x48, 0x2a, 0x00, 
    0xb4, 
    0x13, MP_QSTR_data & 0xff, MP_QSTR_data >> 8, 
    0xc5, 
    0xb5, 
    0x43, 0x0e, 0x80, 
    0xb4, 
    0x13, MP_QSTR_coro & 0xff, MP_QSTR_coro >> 8, 
    0x14, MP_QSTR_send & 0xff, MP_QSTR_send >> 8, 
    0x51, 
    0x36, 0x01, 
    0x59, 
    0x42, 0x10, 0x80, 
    0x51, 
    0xb4, 
    0x18, MP_QSTR_data & 0xff, MP_QSTR_data >> 8, 
    0xb4, 
    0x13, MP_QSTR_coro & 0xff, MP_QSTR_coro >> 8, 
    0x14, MP_QSTR_throw & 0xff, MP_QSTR_throw >> 8, 
    0xb5, 
    0x36, 0x01, 
    0x59, 
    0x4a, 0xb7, 0x00, 
    0x57, 
    0xb1, 
    0xdf, 
    0x44, 0xb0, 0x80, 
    0xc6, 
    0x49, 0xa4, 0x00, 
    0xb4, 
    0xb0, 
    0xde, 
    0x44, 0x13, 0x80, 
    0x12, MP_QSTR_isinstance & 0xff, MP_QSTR_isinstance >> 8, 
    0xb6, 
    0x12, MP_QSTR_StopIteration & 0xff, MP_QSTR_StopIteration >> 8, 
    0x34, 0x02, 
    0x44, 0x05, 0x80, 
    0xb6, 
    0x13, MP_QSTR_value & 0xff, MP_QSTR_value >> 8, 
    0x63, 
    0xb6, 
    0x65, 
    0xb4, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x44, 0x5b, 0x80, 
    0x50, 
    0xc7, 
    0xb4, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x52, 
    0xde, 
    0x44, 0x08, 0x80, 
    0x51, 
    0xb4, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x42, 0x28, 0x80, 
    0x42, 0x14, 0x80, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0xb4, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x14, MP_QSTR_pop_head & 0xff, MP_QSTR_pop_head >> 8, 
    0x36, 0x00, 
    0x36, 0x01, 
    0x59, 
    0x52, 
    0xc7, 
    0xb4, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x14, MP_QSTR_peek & 0xff, MP_QSTR_peek >> 8, 
    0x36, 0x00, 
    0x43, 0xe0, 0x7f, 
    0x50, 
    0xb4, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0xb7, 
    0x43, 0x14, 0x80, 
    0x12, MP_QSTR_isinstance & 0xff, MP_QSTR_isinstance >> 8, 
    0xb6, 
    0xb2, 
    0x34, 0x02, 
    0x43, 0x0a, 0x80, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0xb4, 
    0x36, 0x01, 
    0x59, 
    0xb6, 
    0xb4, 
    0x18, MP_QSTR_data & 0xff, MP_QSTR_data >> 8, 
    0x42, 0x28, 0x80, 
    0xb4, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x51, 
    0xde, 
    0x44, 0x1f, 0x80, 
    0xb5, 
    0x12, MP_QSTR__exc_context & 0xff, MP_QSTR__exc_context >> 8, 
    0x10, MP_QSTR_exception & 0xff, MP_QSTR_exception >> 8, 
    0x56, 
    0xb4, 
    0x12, MP_QSTR__exc_context & 0xff, MP_QSTR__exc_context >> 8, 
    0x10, MP_QSTR_future & 0xff, MP_QSTR_future >> 8, 
    0x56, 
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x14, MP_QSTR_call_exception_handler & 0xff, MP_QSTR_call_exception_handler >> 8, 
    0x12, MP_QSTR__exc_context & 0xff, MP_QSTR__exc_context >> 8, 
    0x36, 0x01, 
    0x59, 
    0x42, 0x00, 0x80, 
    0x51, 
    0x51, 
    0xc6, 
    0x28, 0x06, 
    0x5d, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x42, 0xc5, 0x7e, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__run_until_complete[1] = {
    MP_ROM_QSTR(MP_QSTR_main_task),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__run_until_complete,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 343,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_run_until_complete,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__run_until_complete + 7,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__run_until_complete + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__run
STATIC const byte fun_data_uasyncio_core__lt_module_gt__run[19] = {
    0x19, 0x0a,
    MP_QSTR_run & 0xff, MP_QSTR_run >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_run_until_complete & 0xff, MP_QSTR_run_until_complete >> 8, 
    0x12, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0xb0, 
    0x34, 0x01, 
    0x34, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__run[1] = {
    MP_ROM_QSTR(MP_QSTR_coro),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__run = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__run,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__run,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_run,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__run + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__run + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt___stopper
STATIC const byte fun_data_uasyncio_core__lt_module_gt___stopper[10] = {
    0x80, 0x40, 0x0a,
    MP_QSTR__stopper & 0xff, MP_QSTR__stopper >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x51, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt___stopper = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt___stopper,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__stopper,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt___stopper + 7,
        .opcodes = fun_data_uasyncio_core__lt_module_gt___stopper + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_create_task
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_create_task[14] = {
    0x11, 0x0a,
    MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0xb0, 
    0x34, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__Loop_create_task[1] = {
    MP_ROM_QSTR(MP_QSTR_coro),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_create_task,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__Loop_create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_create_task,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_create_task + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_create_task + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_run_forever
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_run_forever[36] = {
    0x10, 0x0a,
    MP_QSTR_run_forever & 0xff, MP_QSTR_run_forever >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x12, MP_QSTR__stopper & 0xff, MP_QSTR__stopper >> 8, 
    0x34, 0x00, 
    0x12, MP_QSTR_globals & 0xff, MP_QSTR_globals >> 8, 
    0x34, 0x00, 
    0x34, 0x02, 
    0x17, MP_QSTR__stop_task & 0xff, MP_QSTR__stop_task >> 8, 
    0x12, MP_QSTR_run_until_complete & 0xff, MP_QSTR_run_until_complete >> 8, 
    0x12, MP_QSTR__stop_task & 0xff, MP_QSTR__stop_task >> 8, 
    0x34, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_run_forever = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_run_forever,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_run_forever,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_run_forever + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_run_forever + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_run_until_complete
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_run_until_complete[19] = {
    0x19, 0x0a,
    MP_QSTR_run_until_complete & 0xff, MP_QSTR_run_until_complete >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_run_until_complete & 0xff, MP_QSTR_run_until_complete >> 8, 
    0x12, MP_QSTR__promote_to_task & 0xff, MP_QSTR__promote_to_task >> 8, 
    0xb0, 
    0x34, 0x01, 
    0x34, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__Loop_run_until_complete[1] = {
    MP_ROM_QSTR(MP_QSTR_aw),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_run_until_complete,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__Loop_run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_run_until_complete,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_run_until_complete + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_run_until_complete + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_stop
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_stop[34] = {
    0x10, 0x0a,
    MP_QSTR_stop & 0xff, MP_QSTR_stop >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR__stop_task & 0xff, MP_QSTR__stop_task >> 8, 
    0x51, 
    0xde, 
    0xd3, 
    0x44, 0x10, 0x80, 
    0x12, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0x12, MP_QSTR__stop_task & 0xff, MP_QSTR__stop_task >> 8, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x17, MP_QSTR__stop_task & 0xff, MP_QSTR__stop_task >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_stop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_stop,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 34,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_stop,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_stop + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_stop + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_close
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_close[9] = {
    0x00, 0x0a,
    MP_QSTR_close & 0xff, MP_QSTR_close >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x51, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_close,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 9,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_close,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_close + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_close + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_set_exception_handler
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_set_exception_handler[16] = {
    0x11, 0x0a,
    MP_QSTR_set_exception_handler & 0xff, MP_QSTR_set_exception_handler >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0xb0, 
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x18, MP_QSTR__exc_handler & 0xff, MP_QSTR__exc_handler >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__Loop_set_exception_handler[1] = {
    MP_ROM_QSTR(MP_QSTR_handler),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_set_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_set_exception_handler,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__Loop_set_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_exception_handler,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_set_exception_handler + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_set_exception_handler + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_get_exception_handler
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_get_exception_handler[14] = {
    0x00, 0x0a,
    MP_QSTR_get_exception_handler & 0xff, MP_QSTR_get_exception_handler >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x13, MP_QSTR__exc_handler & 0xff, MP_QSTR__exc_handler >> 8, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_get_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_get_exception_handler,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_get_exception_handler,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_get_exception_handler + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_get_exception_handler + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_default_exception_handler
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_default_exception_handler[59] = {
    0x3a, 0x0a,
    MP_QSTR_default_exception_handler & 0xff, MP_QSTR_default_exception_handler >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_print & 0xff, MP_QSTR_print >> 8, 
    0xb1, 
    0x10, MP_QSTR_message & 0xff, MP_QSTR_message >> 8, 
    0x55, 
    0x34, 0x01, 
    0x59, 
    0x12, MP_QSTR_print & 0xff, MP_QSTR_print >> 8, 
    0x10, MP_QSTR_future_colon_ & 0xff, MP_QSTR_future_colon_ >> 8, 
    0xb1, 
    0x10, MP_QSTR_future & 0xff, MP_QSTR_future >> 8, 
    0x55, 
    0x10, MP_QSTR_coro_equals_ & 0xff, MP_QSTR_coro_equals_ >> 8, 
    0xb1, 
    0x10, MP_QSTR_future & 0xff, MP_QSTR_future >> 8, 
    0x55, 
    0x13, MP_QSTR_coro & 0xff, MP_QSTR_coro >> 8, 
    0x34, 0x04, 
    0x59, 
    0x12, MP_QSTR_sys & 0xff, MP_QSTR_sys >> 8, 
    0x14, MP_QSTR_print_exception & 0xff, MP_QSTR_print_exception >> 8, 
    0xb1, 
    0x10, MP_QSTR_exception & 0xff, MP_QSTR_exception >> 8, 
    0x55, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__Loop_default_exception_handler[2] = {
    MP_ROM_QSTR(MP_QSTR_loop),
    MP_ROM_QSTR(MP_QSTR_context),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_default_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_default_exception_handler,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__Loop_default_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 59,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_default_exception_handler,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_default_exception_handler + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_default_exception_handler + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop_call_exception_handler
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop_call_exception_handler[31] = {
    0x19, 0x0a,
    MP_QSTR_call_exception_handler & 0xff, MP_QSTR_call_exception_handler >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x13, MP_QSTR__exc_handler & 0xff, MP_QSTR__exc_handler >> 8, 
    0x45, 0x06, 0x80, 
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x13, MP_QSTR_default_exception_handler & 0xff, MP_QSTR_default_exception_handler >> 8, 
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0xb0, 
    0x34, 0x02, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__Loop_call_exception_handler[1] = {
    MP_ROM_QSTR(MP_QSTR_context),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop_call_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop_call_exception_handler,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__Loop_call_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 31,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_call_exception_handler,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop_call_exception_handler + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop_call_exception_handler + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__Loop
STATIC const byte fun_data_uasyncio_core__lt_module_gt__Loop[70] = {
    0x00, 0x0a,
    MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x51, 
    0x16, MP_QSTR__exc_handler & 0xff, MP_QSTR__exc_handler >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_run_forever & 0xff, MP_QSTR_run_forever >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR_run_until_complete & 0xff, MP_QSTR_run_until_complete >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_stop & 0xff, MP_QSTR_stop >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR_close & 0xff, MP_QSTR_close >> 8, 
    0x32, 0x05, 
    0x16, MP_QSTR_set_exception_handler & 0xff, MP_QSTR_set_exception_handler >> 8, 
    0x32, 0x06, 
    0x16, MP_QSTR_get_exception_handler & 0xff, MP_QSTR_get_exception_handler >> 8, 
    0x32, 0x07, 
    0x16, MP_QSTR_default_exception_handler & 0xff, MP_QSTR_default_exception_handler >> 8, 
    0x32, 0x08, 
    0x16, MP_QSTR_call_exception_handler & 0xff, MP_QSTR_call_exception_handler >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__Loop[9] = {
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_create_task),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_run_forever),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_run_until_complete),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_stop),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_close),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_set_exception_handler),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_get_exception_handler),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_default_exception_handler),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop_call_exception_handler),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__Loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__Loop,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 70,
    .n_obj = 0,
    .n_raw_code = 9,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_Loop,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__Loop + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__Loop + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__get_event_loop
STATIC const byte fun_data_uasyncio_core__lt_module_gt__get_event_loop[13] = {
    0x92, 0x80, 0x01, 0x0a,
    MP_QSTR_get_event_loop & 0xff, MP_QSTR_get_event_loop >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt__get_event_loop[2] = {
    MP_ROM_QSTR(MP_QSTR_runq_len),
    MP_ROM_QSTR(MP_QSTR_waitq_len),
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__get_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__get_event_loop,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt__get_event_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 13,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name = MP_QSTR_get_event_loop,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__get_event_loop + 8,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__get_event_loop + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__current_task
STATIC const byte fun_data_uasyncio_core__lt_module_gt__current_task[11] = {
    0x00, 0x0a,
    MP_QSTR_current_task & 0xff, MP_QSTR_current_task >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__current_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__current_task,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 11,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_current_task,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__current_task + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__current_task + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt__new_event_loop
STATIC const byte fun_data_uasyncio_core__lt_module_gt__new_event_loop[27] = {
    0x00, 0x0a,
    MP_QSTR_new_event_loop & 0xff, MP_QSTR_new_event_loop >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x34, 0x00, 
    0x17, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x12, MP_QSTR_IOQueue & 0xff, MP_QSTR_IOQueue >> 8, 
    0x34, 0x00, 
    0x17, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x12, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt__new_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt__new_event_loop,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_new_event_loop,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt__new_event_loop + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt__new_event_loop + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_<module>
STATIC const byte fun_data_uasyncio_core__lt_module_gt_[279] = {
    0x2c, 0x0a,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_uasyncio_slash_core_dot_py & 0xff, MP_QSTR_uasyncio_slash_core_dot_py >> 8,
    0x00,
    0x80, 
    0x10, MP_QSTR_ticks_ms & 0xff, MP_QSTR_ticks_ms >> 8, 
    0x10, MP_QSTR_ticks_diff & 0xff, MP_QSTR_ticks_diff >> 8, 
    0x10, MP_QSTR_ticks_add & 0xff, MP_QSTR_ticks_add >> 8, 
    0x2a, 0x03, 
    0x1b, MP_QSTR_time & 0xff, MP_QSTR_time >> 8, 
    0x1c, MP_QSTR_ticks_ms & 0xff, MP_QSTR_ticks_ms >> 8, 
    0x16, MP_QSTR_ticks & 0xff, MP_QSTR_ticks >> 8, 
    0x1c, MP_QSTR_ticks_diff & 0xff, MP_QSTR_ticks_diff >> 8, 
    0x16, MP_QSTR_ticks_diff & 0xff, MP_QSTR_ticks_diff >> 8, 
    0x1c, MP_QSTR_ticks_add & 0xff, MP_QSTR_ticks_add >> 8, 
    0x16, MP_QSTR_ticks_add & 0xff, MP_QSTR_ticks_add >> 8, 
    0x59, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_sys & 0xff, MP_QSTR_sys >> 8, 
    0x16, MP_QSTR_sys & 0xff, MP_QSTR_sys >> 8, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x16, MP_QSTR_select & 0xff, MP_QSTR_select >> 8, 
    0x48, 0x1c, 0x00, 
    0x80, 
    0x10, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x10, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x2a, 0x02, 
    0x1b, MP_QSTR__uasyncio & 0xff, MP_QSTR__uasyncio >> 8, 
    0x1c, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x16, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x1c, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x16, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x59, 
    0x4a, 0x1e, 0x00, 
    0x59, 
    0x81, 
    0x10, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x10, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x2a, 0x02, 
    0x1b, MP_QSTR_task & 0xff, MP_QSTR_task >> 8, 
    0x1c, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x16, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x1c, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x16, MP_QSTR_Task & 0xff, MP_QSTR_Task >> 8, 
    0x59, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x54, 
    0x32, 0x01, 
    0x10, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0x11, MP_QSTR_BaseException & 0xff, MP_QSTR_BaseException >> 8, 
    0x34, 0x03, 
    0x16, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0x54, 
    0x32, 0x02, 
    0x10, MP_QSTR_TimeoutError & 0xff, MP_QSTR_TimeoutError >> 8, 
    0x11, MP_QSTR_Exception & 0xff, MP_QSTR_Exception >> 8, 
    0x34, 0x03, 
    0x16, MP_QSTR_TimeoutError & 0xff, MP_QSTR_TimeoutError >> 8, 
    0x2c, 0x03, 
    0x23, 0x00, 
    0x10, MP_QSTR_message & 0xff, MP_QSTR_message >> 8, 
    0x62, 
    0x51, 
    0x10, MP_QSTR_exception & 0xff, MP_QSTR_exception >> 8, 
    0x62, 
    0x51, 
    0x10, MP_QSTR_future & 0xff, MP_QSTR_future >> 8, 
    0x62, 
    0x16, MP_QSTR__exc_context & 0xff, MP_QSTR__exc_context >> 8, 
    0x54, 
    0x32, 0x03, 
    0x10, MP_QSTR_SingletonGenerator & 0xff, MP_QSTR_SingletonGenerator >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_SingletonGenerator & 0xff, MP_QSTR_SingletonGenerator >> 8, 
    0x11, MP_QSTR_SingletonGenerator & 0xff, MP_QSTR_SingletonGenerator >> 8, 
    0x34, 0x00, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x04, 
    0x16, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x32, 0x05, 
    0x16, MP_QSTR_sleep & 0xff, MP_QSTR_sleep >> 8, 
    0x54, 
    0x32, 0x06, 
    0x10, MP_QSTR_IOQueue & 0xff, MP_QSTR_IOQueue >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_IOQueue & 0xff, MP_QSTR_IOQueue >> 8, 
    0x32, 0x07, 
    0x16, MP_QSTR__promote_to_task & 0xff, MP_QSTR__promote_to_task >> 8, 
    0x32, 0x08, 
    0x16, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0x51, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x09, 
    0x16, MP_QSTR_run_until_complete & 0xff, MP_QSTR_run_until_complete >> 8, 
    0x32, 0x0a, 
    0x16, MP_QSTR_run & 0xff, MP_QSTR_run >> 8, 
    0x32, 0x0b, 
    0x16, MP_QSTR__stopper & 0xff, MP_QSTR__stopper >> 8, 
    0x51, 
    0x17, MP_QSTR__stop_task & 0xff, MP_QSTR__stop_task >> 8, 
    0x54, 
    0x32, 0x0c, 
    0x10, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_Loop & 0xff, MP_QSTR_Loop >> 8, 
    0x80, 
    0x80, 
    0x2a, 0x02, 
    0x53, 
    0x33, 0x0d, 
    0x16, MP_QSTR_get_event_loop & 0xff, MP_QSTR_get_event_loop >> 8, 
    0x32, 0x0e, 
    0x16, MP_QSTR_current_task & 0xff, MP_QSTR_current_task >> 8, 
    0x32, 0x0f, 
    0x16, MP_QSTR_new_event_loop & 0xff, MP_QSTR_new_event_loop >> 8, 
    0x11, MP_QSTR_new_event_loop & 0xff, MP_QSTR_new_event_loop >> 8, 
    0x34, 0x00, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio_core__lt_module_gt__0 = {{&mp_type_str}, 64973, 31, (const byte*)"\x54\x61\x73\x6b\x20\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x20\x77\x61\x73\x6e\x27\x74\x20\x72\x65\x74\x72\x69\x65\x76\x65\x64"};
STATIC const mp_rom_obj_t const_table_data_uasyncio_core__lt_module_gt_[16] = {
    MP_ROM_PTR(&const_obj_uasyncio_core__lt_module_gt__0),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__CancelledError),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__TimeoutError),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__SingletonGenerator),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__sleep_ms),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__sleep),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__IOQueue),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt___promote_to_task),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__create_task),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__run_until_complete),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__run),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt___stopper),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__Loop),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__get_event_loop),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__current_task),
    MP_ROM_PTR(&raw_code_uasyncio_core__lt_module_gt__new_event_loop),
};
const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 279,
    .n_obj = 1,
    .n_raw_code = 15,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_uasyncio_slash_core_dot_py,
        .line_info = fun_data_uasyncio_core__lt_module_gt_ + 6,
        .opcodes = fun_data_uasyncio_core__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__Event___init__
STATIC const byte fun_data_uasyncio_event__lt_module_gt__Event___init__[26] = {
    0x11, 0x0a,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x50, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x14, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x36, 0x00, 
    0xb0, 
    0x18, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__Event___init__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__Event___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__Event___init__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__Event___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__Event___init__ + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__Event___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__Event_is_set
STATIC const byte fun_data_uasyncio_event__lt_module_gt__Event_is_set[12] = {
    0x09, 0x0a,
    MP_QSTR_is_set & 0xff, MP_QSTR_is_set >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__Event_is_set[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__Event_is_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__Event_is_set,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__Event_is_set,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 12,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_is_set,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__Event_is_set + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__Event_is_set + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__Event_set
STATIC const byte fun_data_uasyncio_event__lt_module_gt__Event_set[50] = {
    0x21, 0x0a,
    MP_QSTR_set & 0xff, MP_QSTR_set >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x42, 0x15, 0x80, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x14, MP_QSTR_pop_head & 0xff, MP_QSTR_pop_head >> 8, 
    0x36, 0x00, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x14, MP_QSTR_peek & 0xff, MP_QSTR_peek >> 8, 
    0x36, 0x00, 
    0x43, 0xdf, 0x7f, 
    0x52, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__Event_set[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__Event_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__Event_set,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__Event_set,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 50,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__Event_set + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__Event_set + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__Event_clear
STATIC const byte fun_data_uasyncio_event__lt_module_gt__Event_clear[14] = {
    0x11, 0x0a,
    MP_QSTR_clear & 0xff, MP_QSTR_clear >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x50, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__Event_clear[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__Event_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__Event_clear,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__Event_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_clear,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__Event_clear + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__Event_clear + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__Event_wait
STATIC const byte fun_data_uasyncio_event__lt_module_gt__Event_wait[49] = {
    0x99, 0x40, 0x0a,
    MP_QSTR_wait & 0xff, MP_QSTR_wait >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x43, 0x20, 0x80, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0x18, MP_QSTR_data & 0xff, MP_QSTR_data >> 8, 
    0x51, 
    0x67, 
    0x59, 
    0x52, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__Event_wait[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__Event_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__Event_wait,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__Event_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 49,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_wait,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__Event_wait + 7,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__Event_wait + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__Event
STATIC const byte fun_data_uasyncio_event__lt_module_gt__Event[46] = {
    0x00, 0x0a,
    MP_QSTR_Event & 0xff, MP_QSTR_Event >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_Event & 0xff, MP_QSTR_Event >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_is_set & 0xff, MP_QSTR_is_set >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR_set & 0xff, MP_QSTR_set >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_clear & 0xff, MP_QSTR_clear >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR_wait & 0xff, MP_QSTR_wait >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__Event[5] = {
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__Event___init__),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__Event_is_set),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__Event_set),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__Event_clear),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__Event_wait),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__Event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__Event,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__Event,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 46,
    .n_obj = 0,
    .n_raw_code = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_Event,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__Event + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__Event + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__ThreadSafeFlag___init__
STATIC const byte fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__[14] = {
    0x11, 0x0a,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x80, 
    0xb0, 
    0x18, MP_QSTR__flag & 0xff, MP_QSTR__flag >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__ + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl
STATIC const byte fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl[22] = {
    0x23, 0x0a,
    MP_QSTR_ioctl & 0xff, MP_QSTR_ioctl >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0xb1, 
    0x83, 
    0xd9, 
    0x44, 0x07, 0x80, 
    0xb0, 
    0x13, MP_QSTR__flag & 0xff, MP_QSTR__flag >> 8, 
    0xb2, 
    0xf4, 
    0x63, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_req),
    MP_ROM_QSTR(MP_QSTR_flags),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 22,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_ioctl,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__ThreadSafeFlag_set
STATIC const byte fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_set[14] = {
    0x11, 0x0a,
    MP_QSTR_set & 0xff, MP_QSTR_set >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x81, 
    0xb0, 
    0x18, MP_QSTR__flag & 0xff, MP_QSTR__flag >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_set[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_set,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_set,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_set + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_set + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__ThreadSafeFlag_wait
STATIC const byte fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait[36] = {
    0x99, 0x40, 0x0a,
    MP_QSTR_wait & 0xff, MP_QSTR_wait >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR__flag & 0xff, MP_QSTR__flag >> 8, 
    0x43, 0x0e, 0x80, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8, 
    0xb0, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0x80, 
    0xb0, 
    0x18, MP_QSTR__flag & 0xff, MP_QSTR__flag >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_wait,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait + 7,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt__ThreadSafeFlag
STATIC const byte fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag[41] = {
    0x00, 0x0a,
    MP_QSTR_ThreadSafeFlag & 0xff, MP_QSTR_ThreadSafeFlag >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_ThreadSafeFlag & 0xff, MP_QSTR_ThreadSafeFlag >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_ioctl & 0xff, MP_QSTR_ioctl >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR_set & 0xff, MP_QSTR_set >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_wait & 0xff, MP_QSTR_wait >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag[4] = {
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag___init__),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag_ioctl),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag_set),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag_wait),
};
STATIC const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt__ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 41,
    .n_obj = 0,
    .n_raw_code = 4,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_ThreadSafeFlag,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt__ThreadSafeFlag + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_<module>
STATIC const byte fun_data_uasyncio_event__lt_module_gt_[80] = {
    0x2c, 0x0a,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_uasyncio_slash_event_dot_py & 0xff, MP_QSTR_uasyncio_slash_event_dot_py >> 8,
    0x00,
    0x81, 
    0x10, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_ & 0xff, MP_QSTR_ >> 8, 
    0x1c, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x16, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x59, 
    0x54, 
    0x32, 0x00, 
    0x10, MP_QSTR_Event & 0xff, MP_QSTR_Event >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_Event & 0xff, MP_QSTR_Event >> 8, 
    0x48, 0x1c, 0x00, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_uio & 0xff, MP_QSTR_uio >> 8, 
    0x16, MP_QSTR_uio & 0xff, MP_QSTR_uio >> 8, 
    0x54, 
    0x32, 0x01, 
    0x10, MP_QSTR_ThreadSafeFlag & 0xff, MP_QSTR_ThreadSafeFlag >> 8, 
    0x11, MP_QSTR_uio & 0xff, MP_QSTR_uio >> 8, 
    0x13, MP_QSTR_IOBase & 0xff, MP_QSTR_IOBase >> 8, 
    0x34, 0x03, 
    0x16, MP_QSTR_ThreadSafeFlag & 0xff, MP_QSTR_ThreadSafeFlag >> 8, 
    0x4a, 0x0d, 0x00, 
    0x57, 
    0x11, MP_QSTR_ImportError & 0xff, MP_QSTR_ImportError >> 8, 
    0xdf, 
    0x44, 0x04, 0x80, 
    0x59, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_event__lt_module_gt_[2] = {
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__Event),
    MP_ROM_PTR(&raw_code_uasyncio_event__lt_module_gt__ThreadSafeFlag),
};
const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 80,
    .n_obj = 0,
    .n_raw_code = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_uasyncio_slash_event_dot_py,
        .line_info = fun_data_uasyncio_event__lt_module_gt_ + 6,
        .opcodes = fun_data_uasyncio_event__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__lt_module_gt__wait_for_runner
STATIC const byte fun_data_uasyncio_funcs__lt_module_gt__wait_for_runner[65] = {
    0xd8, 0x46, 0x0a,
    MP_QSTR_runner & 0xff, MP_QSTR_runner >> 8,
    MP_QSTR_uasyncio_slash_funcs_dot_py & 0xff, MP_QSTR_uasyncio_slash_funcs_dot_py >> 8,
    0x00,
    0x48, 0x0b, 0x00, 
    0xb3, 
    0x5e, 
    0x51, 
    0x68, 
    0x27, 0x01, 
    0x52, 
    0xc4, 
    0x4a, 0x18, 0x00, 
    0x57, 
    0x12, MP_QSTR_BaseException & 0xff, MP_QSTR_BaseException >> 8, 
    0xdf, 
    0x44, 0x0f, 0x80, 
    0xc5, 
    0x49, 0x03, 0x00, 
    0xb5, 
    0xc4, 
    0x51, 
    0x51, 
    0xc5, 
    0x28, 0x05, 
    0x5d, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x25, 0x00, 
    0x51, 
    0xde, 
    0x44, 0x0a, 0x80, 
    0xb4, 
    0x27, 0x00, 
    0xb2, 
    0x14, MP_QSTR_cancel & 0xff, MP_QSTR_cancel >> 8, 
    0x36, 0x00, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_funcs__lt_module_gt__wait_for_runner[4] = {
    MP_ROM_QSTR(MP_QSTR__star_),
    MP_ROM_QSTR(MP_QSTR__star_),
    MP_ROM_QSTR(MP_QSTR_waiter),
    MP_ROM_QSTR(MP_QSTR_aw),
};
STATIC const mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt__wait_for_runner = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt__wait_for_runner,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_funcs__lt_module_gt__wait_for_runner,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 65,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_runner,
        .qstr_source_file = MP_QSTR_uasyncio_slash_funcs_dot_py,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt__wait_for_runner + 7,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt__wait_for_runner + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__lt_module_gt__wait_for
STATIC const byte fun_data_uasyncio_funcs__lt_module_gt__wait_for[161] = {
    0xeb, 0x43, 0x8a, 0x01,
    MP_QSTR_wait_for & 0xff, MP_QSTR_wait_for >> 8,
    MP_QSTR_uasyncio_slash_funcs_dot_py & 0xff, MP_QSTR_uasyncio_slash_funcs_dot_py >> 8,
    0x00, 0x06, 0x07,
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x14, MP_QSTR__promote_to_task & 0xff, MP_QSTR__promote_to_task >> 8, 
    0xb0, 
    0x36, 0x01, 
    0xc0, 
    0xb1, 
    0x51, 
    0xde, 
    0x44, 0x05, 0x80, 
    0xb0, 
    0x5e, 
    0x51, 
    0x68, 
    0x63, 
    0xb6, 
    0xb7, 
    0x20, 0x03, 0x02, 
    0xc3, 
    0x51, 
    0x27, 0x06, 
    0x51, 
    0x27, 0x07, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x14, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0xb3, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0xb0, 
    0x34, 0x02, 
    0x36, 0x01, 
    0xc4, 
    0x48, 0x0b, 0x00, 
    0xb2, 
    0xb1, 
    0x34, 0x01, 
    0x5e, 
    0x51, 
    0x68, 
    0x59, 
    0x4a, 0x3c, 0x00, 
    0x57, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0xdf, 
    0x44, 0x30, 0x80, 
    0xc5, 
    0x49, 0x24, 0x00, 
    0x25, 0x06, 
    0x52, 
    0xde, 
    0x44, 0x03, 0x80, 
    0x25, 0x07, 
    0x63, 
    0x25, 0x06, 
    0x51, 
    0xde, 
    0x44, 0x0f, 0x80, 
    0x52, 
    0x27, 0x06, 
    0xb4, 
    0x14, MP_QSTR_cancel & 0xff, MP_QSTR_cancel >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb5, 
    0x65, 
    0x42, 0x03, 0x80, 
    0x25, 0x06, 
    0x65, 
    0x51, 
    0x51, 
    0xc5, 
    0x28, 0x05, 
    0x5d, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x52, 
    0x27, 0x06, 
    0xb4, 
    0x14, MP_QSTR_cancel & 0xff, MP_QSTR_cancel >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb4, 
    0x5e, 
    0x51, 
    0x68, 
    0x59, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_TimeoutError & 0xff, MP_QSTR_TimeoutError >> 8, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_funcs__lt_module_gt__wait_for[4] = {
    MP_ROM_QSTR(MP_QSTR_aw),
    MP_ROM_QSTR(MP_QSTR_timeout),
    MP_ROM_QSTR(MP_QSTR_sleep),
    MP_ROM_PTR(&raw_code_uasyncio_funcs__lt_module_gt__wait_for_runner),
};
STATIC const mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt__wait_for = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt__wait_for,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_funcs__lt_module_gt__wait_for,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 161,
    .n_obj = 0,
    .n_raw_code = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_wait_for,
        .qstr_source_file = MP_QSTR_uasyncio_slash_funcs_dot_py,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt__wait_for + 8,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt__wait_for + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__lt_module_gt__wait_for_ms
STATIC const byte fun_data_uasyncio_funcs__lt_module_gt__wait_for_ms[21] = {
    0x2a, 0x0a,
    MP_QSTR_wait_for_ms & 0xff, MP_QSTR_wait_for_ms >> 8,
    MP_QSTR_uasyncio_slash_funcs_dot_py & 0xff, MP_QSTR_uasyncio_slash_funcs_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_wait_for & 0xff, MP_QSTR_wait_for >> 8, 
    0xb0, 
    0xb1, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x34, 0x03, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_funcs__lt_module_gt__wait_for_ms[2] = {
    MP_ROM_QSTR(MP_QSTR_aw),
    MP_ROM_QSTR(MP_QSTR_timeout),
};
STATIC const mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt__wait_for_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt__wait_for_ms,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_funcs__lt_module_gt__wait_for_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_wait_for_ms,
        .qstr_source_file = MP_QSTR_uasyncio_slash_funcs_dot_py,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt__wait_for_ms + 6,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt__wait_for_ms + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__lt_module_gt__gather_<listcomp>
STATIC const byte fun_data_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_[30] = {
    0x49, 0x0a,
    MP_QSTR__lt_listcomp_gt_ & 0xff, MP_QSTR__lt_listcomp_gt_ >> 8,
    MP_QSTR_uasyncio_slash_funcs_dot_py & 0xff, MP_QSTR_uasyncio_slash_funcs_dot_py >> 8,
    0x00,
    0x2b, 0x00, 
    0xb0, 
    0x5f, 
    0x4b, 0x0f, 0x00, 
    0xc1, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x14, MP_QSTR__promote_to_task & 0xff, MP_QSTR__promote_to_task >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x2f, 0x14, 
    0x42, 0xee, 0x7f, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_[1] = {
    MP_ROM_QSTR(MP_QSTR__star_),
};
STATIC const mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 30,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_listcomp_gt_,
        .qstr_source_file = MP_QSTR_uasyncio_slash_funcs_dot_py,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_ + 6,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__lt_module_gt__gather
STATIC const byte fun_data_uasyncio_funcs__lt_module_gt__gather[99] = {
    0xe8, 0xca, 0x80, 0xc0, 0x40, 0x0a,
    MP_QSTR_gather & 0xff, MP_QSTR_gather >> 8,
    MP_QSTR_uasyncio_slash_funcs_dot_py & 0xff, MP_QSTR_uasyncio_slash_funcs_dot_py >> 8,
    0x00,
    0x32, 0x01, 
    0xb1, 
    0x34, 0x01, 
    0xc2, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb2, 
    0x34, 0x01, 
    0x80, 
    0x42, 0x3e, 0x80, 
    0x57, 
    0xc3, 
    0x48, 0x0c, 0x00, 
    0xb2, 
    0xb3, 
    0x55, 
    0x5e, 
    0x51, 
    0x68, 
    0xb2, 
    0xb3, 
    0x56, 
    0x4a, 0x2b, 0x00, 
    0x57, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0x12, MP_QSTR_Exception & 0xff, MP_QSTR_Exception >> 8, 
    0x2a, 0x02, 
    0xdf, 
    0x44, 0x1a, 0x80, 
    0xc4, 
    0x49, 0x0e, 0x00, 
    0xb0, 
    0x44, 0x07, 0x80, 
    0xb4, 
    0xb2, 
    0xb3, 
    0x56, 
    0x42, 0x02, 0x80, 
    0xb4, 
    0x65, 
    0x51, 
    0x51, 
    0xc4, 
    0x28, 0x04, 
    0x5d, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x81, 
    0xe5, 
    0x58, 
    0x5a, 
    0xd7, 
    0x43, 0xbc, 0x7f, 
    0x59, 
    0x59, 
    0xb2, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_funcs__lt_module_gt__gather[2] = {
    MP_ROM_QSTR(MP_QSTR_return_exceptions),
    MP_ROM_PTR(&raw_code_uasyncio_funcs__lt_module_gt__gather__lt_listcomp_gt_),
};
STATIC const mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt__gather = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x0d,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt__gather,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_funcs__lt_module_gt__gather,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 99,
    .n_obj = 0,
    .n_raw_code = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 2,
        .scope_flags = 13,
        .n_pos_args = 0,
        .n_kwonly_args = 1,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_gather,
        .qstr_source_file = MP_QSTR_uasyncio_slash_funcs_dot_py,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt__gather + 10,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt__gather + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_<module>
STATIC const byte fun_data_uasyncio_funcs__lt_module_gt_[57] = {
    0x18, 0x0a,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_uasyncio_slash_funcs_dot_py & 0xff, MP_QSTR_uasyncio_slash_funcs_dot_py >> 8,
    0x00,
    0x81, 
    0x10, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_ & 0xff, MP_QSTR_ >> 8, 
    0x1c, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x16, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x59, 
    0x11, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_sleep & 0xff, MP_QSTR_sleep >> 8, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x00, 
    0x16, MP_QSTR_wait_for & 0xff, MP_QSTR_wait_for >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_wait_for_ms & 0xff, MP_QSTR_wait_for_ms >> 8, 
    0x53, 
    0x2c, 0x00, 
    0x50, 
    0x10, MP_QSTR_return_exceptions & 0xff, MP_QSTR_return_exceptions >> 8, 
    0x62, 
    0x33, 0x02, 
    0x16, MP_QSTR_gather & 0xff, MP_QSTR_gather >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_funcs__lt_module_gt_[3] = {
    MP_ROM_PTR(&raw_code_uasyncio_funcs__lt_module_gt__wait_for),
    MP_ROM_PTR(&raw_code_uasyncio_funcs__lt_module_gt__wait_for_ms),
    MP_ROM_PTR(&raw_code_uasyncio_funcs__lt_module_gt__gather),
};
const mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 57,
    .n_obj = 0,
    .n_raw_code = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_uasyncio_slash_funcs_dot_py,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt_ + 6,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt__Lock___init__
STATIC const byte fun_data_uasyncio_lock__lt_module_gt__Lock___init__[26] = {
    0x11, 0x0a,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0x80, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x14, MP_QSTR_TaskQueue & 0xff, MP_QSTR_TaskQueue >> 8, 
    0x36, 0x00, 
    0xb0, 
    0x18, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt__Lock___init__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt__Lock___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt__Lock___init__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt__Lock___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt__Lock___init__ + 6,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt__Lock___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt__Lock_locked
STATIC const byte fun_data_uasyncio_lock__lt_module_gt__Lock_locked[14] = {
    0x11, 0x0a,
    MP_QSTR_locked & 0xff, MP_QSTR_locked >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x81, 
    0xd9, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt__Lock_locked[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt__Lock_locked = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt__Lock_locked,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt__Lock_locked,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_locked,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt__Lock_locked + 6,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt__Lock_locked + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt__Lock_release
STATIC const byte fun_data_uasyncio_lock__lt_module_gt__Lock_release[75] = {
    0x19, 0x0a,
    MP_QSTR_release & 0xff, MP_QSTR_release >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x81, 
    0xdc, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_RuntimeError & 0xff, MP_QSTR_RuntimeError >> 8, 
    0x23, 0x01, 
    0x34, 0x01, 
    0x65, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x14, MP_QSTR_peek & 0xff, MP_QSTR_peek >> 8, 
    0x36, 0x00, 
    0x44, 0x20, 0x80, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x14, MP_QSTR_pop_head & 0xff, MP_QSTR_pop_head >> 8, 
    0x36, 0x00, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__task_queue & 0xff, MP_QSTR__task_queue >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x36, 0x01, 
    0x59, 
    0x42, 0x05, 0x80, 
    0x80, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio_lock__lt_module_gt__Lock_release_0 = {{&mp_type_str}, 43943, 17, (const byte*)"\x4c\x6f\x63\x6b\x20\x6e\x6f\x74\x20\x61\x63\x71\x75\x69\x72\x65\x64"};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt__Lock_release[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_uasyncio_lock__lt_module_gt__Lock_release_0),
};
STATIC const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt__Lock_release = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt__Lock_release,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt__Lock_release,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 75,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_release,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt__Lock_release + 6,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt__Lock_release + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt__Lock_acquire
STATIC const byte fun_data_uasyncio_lock__lt_module_gt__Lock_acquire[115] = {
    0xb9, 0x42, 0x0a,
    MP_QSTR_acquire & 0xff, MP_QSTR_acquire >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x80, 
    0xdc, 
    0x44, 0x5b, 0x80, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x14, MP_QSTR_push_head & 0xff, MP_QSTR_push_head >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_waiting & 0xff, MP_QSTR_waiting >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0x18, MP_QSTR_data & 0xff, MP_QSTR_data >> 8, 
    0x48, 0x06, 0x00, 
    0x51, 
    0x67, 
    0x59, 
    0x4a, 0x35, 0x00, 
    0x57, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0xdf, 
    0x44, 0x29, 0x80, 
    0xc1, 
    0x49, 0x1d, 0x00, 
    0xb0, 
    0x13, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_cur_task & 0xff, MP_QSTR_cur_task >> 8, 
    0xd9, 
    0x44, 0x0c, 0x80, 
    0x81, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0xb0, 
    0x14, MP_QSTR_release & 0xff, MP_QSTR_release >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb1, 
    0x65, 
    0x51, 
    0x51, 
    0xc1, 
    0x28, 0x01, 
    0x5d, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x81, 
    0xb0, 
    0x18, MP_QSTR_state & 0xff, MP_QSTR_state >> 8, 
    0x52, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt__Lock_acquire[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt__Lock_acquire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt__Lock_acquire,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt__Lock_acquire,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 115,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_acquire,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt__Lock_acquire + 7,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt__Lock_acquire + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt__Lock___enter__
STATIC const byte fun_data_uasyncio_lock__lt_module_gt__Lock___enter__[18] = {
    0x91, 0x40, 0x0a,
    MP_QSTR___enter__ & 0xff, MP_QSTR___enter__ >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0xb0, 
    0x14, MP_QSTR_acquire & 0xff, MP_QSTR_acquire >> 8, 
    0x36, 0x00, 
    0x5e, 
    0x51, 
    0x68, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt__Lock___enter__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt__Lock___enter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt__Lock___enter__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt__Lock___enter__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___enter__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt__Lock___enter__ + 7,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt__Lock___enter__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt__Lock___exit__
STATIC const byte fun_data_uasyncio_lock__lt_module_gt__Lock___exit__[15] = {
    0xa8, 0x44, 0x0a,
    MP_QSTR___exit__ & 0xff, MP_QSTR___exit__ >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0xb0, 
    0x14, MP_QSTR_release & 0xff, MP_QSTR_release >> 8, 
    0x36, 0x00, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt__Lock___exit__[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_exc_type),
    MP_ROM_QSTR(MP_QSTR_exc),
    MP_ROM_QSTR(MP_QSTR_tb),
};
STATIC const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt__Lock___exit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt__Lock___exit__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt__Lock___exit__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 15,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___exit__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt__Lock___exit__ + 7,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt__Lock___exit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt__Lock
STATIC const byte fun_data_uasyncio_lock__lt_module_gt__Lock[51] = {
    0x00, 0x0a,
    MP_QSTR_Lock & 0xff, MP_QSTR_Lock >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_Lock & 0xff, MP_QSTR_Lock >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_locked & 0xff, MP_QSTR_locked >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR_release & 0xff, MP_QSTR_release >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_acquire & 0xff, MP_QSTR_acquire >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR___enter__ & 0xff, MP_QSTR___enter__ >> 8, 
    0x32, 0x05, 
    0x16, MP_QSTR___exit__ & 0xff, MP_QSTR___exit__ >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt__Lock[6] = {
    MP_ROM_PTR(&raw_code_uasyncio_lock__lt_module_gt__Lock___init__),
    MP_ROM_PTR(&raw_code_uasyncio_lock__lt_module_gt__Lock_locked),
    MP_ROM_PTR(&raw_code_uasyncio_lock__lt_module_gt__Lock_release),
    MP_ROM_PTR(&raw_code_uasyncio_lock__lt_module_gt__Lock_acquire),
    MP_ROM_PTR(&raw_code_uasyncio_lock__lt_module_gt__Lock___enter__),
    MP_ROM_PTR(&raw_code_uasyncio_lock__lt_module_gt__Lock___exit__),
};
STATIC const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt__Lock = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt__Lock,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt__Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 51,
    .n_obj = 0,
    .n_raw_code = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_Lock,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt__Lock + 6,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt__Lock + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_<module>
STATIC const byte fun_data_uasyncio_lock__lt_module_gt_[36] = {
    0x10, 0x0a,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_uasyncio_slash_lock_dot_py & 0xff, MP_QSTR_uasyncio_slash_lock_dot_py >> 8,
    0x00,
    0x81, 
    0x10, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_ & 0xff, MP_QSTR_ >> 8, 
    0x1c, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x16, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x59, 
    0x54, 
    0x32, 0x00, 
    0x10, MP_QSTR_Lock & 0xff, MP_QSTR_Lock >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_Lock & 0xff, MP_QSTR_Lock >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_lock__lt_module_gt_[1] = {
    MP_ROM_PTR(&raw_code_uasyncio_lock__lt_module_gt__Lock),
};
const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_obj = 0,
    .n_raw_code = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_uasyncio_slash_lock_dot_py,
        .line_info = fun_data_uasyncio_lock__lt_module_gt_ + 6,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream___init__
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream___init__[26] = {
    0xa3, 0x01, 0x0a,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb1, 
    0xb0, 
    0x18, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0xb2, 
    0xb0, 
    0x18, MP_QSTR_e & 0xff, MP_QSTR_e >> 8, 
    0x23, 0x03, 
    0xb0, 
    0x18, MP_QSTR_out_buf & 0xff, MP_QSTR_out_buf >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio_stream__lt_module_gt__Stream___init___0 = {{&mp_type_bytes}, 5381, 0, (const byte*)""};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream___init__[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
    MP_ROM_QSTR(MP_QSTR_e),
    MP_ROM_PTR(&const_obj_uasyncio_stream__lt_module_gt__Stream___init___0),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream___init__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream___init__ + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream___init__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_get_extra_info
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_get_extra_info[14] = {
    0x1a, 0x0a,
    MP_QSTR_get_extra_info & 0xff, MP_QSTR_get_extra_info >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_e & 0xff, MP_QSTR_e >> 8, 
    0xb1, 
    0x55, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_get_extra_info[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_v),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_get_extra_info = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_get_extra_info,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_get_extra_info,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_get_extra_info,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_get_extra_info + 6,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_get_extra_info + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream___aenter__
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream___aenter__[10] = {
    0x89, 0x40, 0x0a,
    MP_QSTR___aenter__ & 0xff, MP_QSTR___aenter__ >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream___aenter__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream___aenter__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___aenter__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream___aenter__ + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream___aenter__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream___aexit__
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream___aexit__[20] = {
    0xa8, 0x44, 0x0a,
    MP_QSTR___aexit__ & 0xff, MP_QSTR___aexit__ >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x14, MP_QSTR_close & 0xff, MP_QSTR_close >> 8, 
    0x36, 0x00, 
    0x5e, 
    0x51, 
    0x68, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream___aexit__[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_exc_type),
    MP_ROM_QSTR(MP_QSTR_exc),
    MP_ROM_QSTR(MP_QSTR_tb),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream___aexit__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___aexit__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream___aexit__ + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_close
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_close[9] = {
    0x09, 0x0a,
    MP_QSTR_close & 0xff, MP_QSTR_close >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_close[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_close,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_close,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 9,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_close,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_close + 6,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_close + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_wait_closed
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_wait_closed[20] = {
    0x91, 0x40, 0x0a,
    MP_QSTR_wait_closed & 0xff, MP_QSTR_wait_closed >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x14, MP_QSTR_close & 0xff, MP_QSTR_close >> 8, 
    0x36, 0x00, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_wait_closed[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_wait_closed,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_wait_closed,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_wait_closed + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_wait_closed + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_read
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_read[36] = {
    0xa2, 0x40, 0x0a,
    MP_QSTR_read & 0xff, MP_QSTR_read >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x14, MP_QSTR_read & 0xff, MP_QSTR_read >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_read[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_n),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_read,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_read,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_read,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_read + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_read + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_readinto
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_readinto[36] = {
    0xa2, 0x40, 0x0a,
    MP_QSTR_readinto & 0xff, MP_QSTR_readinto >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x14, MP_QSTR_readinto & 0xff, MP_QSTR_readinto >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_readinto[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_readinto,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_readinto,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_readinto + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_readinto + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_readexactly
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_readexactly[81] = {
    0xb2, 0x40, 0x0a,
    MP_QSTR_readexactly & 0xff, MP_QSTR_readexactly >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x23, 0x02, 
    0xc2, 
    0x42, 0x3d, 0x80, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x14, MP_QSTR_read & 0xff, MP_QSTR_read >> 8, 
    0xb1, 
    0x36, 0x01, 
    0xc3, 
    0xb3, 
    0x51, 
    0xde, 
    0xd3, 
    0x44, 0x1a, 0x80, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb3, 
    0x34, 0x01, 
    0x43, 0x04, 0x80, 
    0x12, MP_QSTR_EOFError & 0xff, MP_QSTR_EOFError >> 8, 
    0x65, 
    0xb2, 
    0xb3, 
    0xe5, 
    0xc2, 
    0xb1, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb3, 
    0x34, 0x01, 
    0xe6, 
    0xc1, 
    0xb1, 
    0x43, 0xbf, 0x7f, 
    0xb2, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio_stream__lt_module_gt__Stream_readexactly_0 = {{&mp_type_bytes}, 5381, 0, (const byte*)""};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_readexactly[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_n),
    MP_ROM_PTR(&const_obj_uasyncio_stream__lt_module_gt__Stream_readexactly_0),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_readexactly = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_readexactly,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_readexactly,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 81,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_readexactly,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_readexactly + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_readexactly + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_readline
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_readline[61] = {
    0xa9, 0x40, 0x0a,
    MP_QSTR_readline & 0xff, MP_QSTR_readline >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x23, 0x01, 
    0xc1, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x14, MP_QSTR_readline & 0xff, MP_QSTR_readline >> 8, 
    0x36, 0x00, 
    0xc2, 
    0xb1, 
    0xb2, 
    0xe5, 
    0xc1, 
    0xb2, 
    0x44, 0x08, 0x80, 
    0xb1, 
    0x7f, 
    0x55, 
    0x8a, 
    0xd9, 
    0x44, 0x02, 0x80, 
    0xb1, 
    0x63, 
    0x42, 0xd0, 0x7f, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio_stream__lt_module_gt__Stream_readline_0 = {{&mp_type_bytes}, 5381, 0, (const byte*)""};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_readline[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_uasyncio_stream__lt_module_gt__Stream_readline_0),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_readline = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_readline,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_readline,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 61,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_readline,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_readline + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_readline + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_write
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_write[20] = {
    0x22, 0x0a,
    MP_QSTR_write & 0xff, MP_QSTR_write >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x57, 
    0x13, MP_QSTR_out_buf & 0xff, MP_QSTR_out_buf >> 8, 
    0xb1, 
    0xe5, 
    0x5a, 
    0x18, MP_QSTR_out_buf & 0xff, MP_QSTR_out_buf >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_write[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_write,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_write,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_write,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_write + 6,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_write + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream_drain
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream_drain[86] = {
    0xc1, 0x40, 0x0a,
    MP_QSTR_drain & 0xff, MP_QSTR_drain >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb0, 
    0x13, MP_QSTR_out_buf & 0xff, MP_QSTR_out_buf >> 8, 
    0x34, 0x01, 
    0xc1, 
    0x80, 
    0xc2, 
    0x42, 0x2c, 0x80, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_write & 0xff, MP_QSTR_queue_write >> 8, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_s & 0xff, MP_QSTR_s >> 8, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0xb1, 
    0xb2, 
    0x51, 
    0x2e, 0x02, 
    0x55, 
    0x36, 0x01, 
    0xc3, 
    0xb3, 
    0x51, 
    0xde, 
    0xd3, 
    0x44, 0x04, 0x80, 
    0xb2, 
    0xb3, 
    0xe5, 
    0xc2, 
    0xb2, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xd7, 
    0x43, 0xc9, 0x7f, 
    0x23, 0x01, 
    0xb0, 
    0x18, MP_QSTR_out_buf & 0xff, MP_QSTR_out_buf >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_uasyncio_stream__lt_module_gt__Stream_drain_0 = {{&mp_type_bytes}, 5381, 0, (const byte*)""};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream_drain[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_uasyncio_stream__lt_module_gt__Stream_drain_0),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream_drain = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream_drain,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream_drain,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 86,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_drain,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream_drain + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream_drain + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Stream
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Stream[86] = {
    0x08, 0x0a,
    MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x2c, 0x00, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_get_extra_info & 0xff, MP_QSTR_get_extra_info >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR___aenter__ & 0xff, MP_QSTR___aenter__ >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR___aexit__ & 0xff, MP_QSTR___aexit__ >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR_close & 0xff, MP_QSTR_close >> 8, 
    0x32, 0x05, 
    0x16, MP_QSTR_wait_closed & 0xff, MP_QSTR_wait_closed >> 8, 
    0x32, 0x06, 
    0x16, MP_QSTR_read & 0xff, MP_QSTR_read >> 8, 
    0x32, 0x07, 
    0x16, MP_QSTR_readinto & 0xff, MP_QSTR_readinto >> 8, 
    0x32, 0x08, 
    0x16, MP_QSTR_readexactly & 0xff, MP_QSTR_readexactly >> 8, 
    0x32, 0x09, 
    0x16, MP_QSTR_readline & 0xff, MP_QSTR_readline >> 8, 
    0x32, 0x0a, 
    0x16, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0x32, 0x0b, 
    0x16, MP_QSTR_drain & 0xff, MP_QSTR_drain >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Stream[12] = {
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream___init__),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_get_extra_info),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream___aenter__),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream___aexit__),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_close),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_wait_closed),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_read),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_readinto),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_readexactly),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_readline),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_write),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream_drain),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Stream = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Stream,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 86,
    .n_obj = 0,
    .n_raw_code = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_Stream,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Stream + 6,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Stream + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__open_connection
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__open_connection[130] = {
    0xea, 0x42, 0x0a,
    MP_QSTR_open_connection & 0xff, MP_QSTR_open_connection >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x80, 
    0x10, MP_QSTR_EINPROGRESS & 0xff, MP_QSTR_EINPROGRESS >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x1c, MP_QSTR_EINPROGRESS & 0xff, MP_QSTR_EINPROGRESS >> 8, 
    0xc2, 
    0x59, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_usocket & 0xff, MP_QSTR_usocket >> 8, 
    0xc3, 
    0xb3, 
    0x14, MP_QSTR_getaddrinfo & 0xff, MP_QSTR_getaddrinfo >> 8, 
    0xb0, 
    0xb1, 
    0x36, 0x02, 
    0x80, 
    0x55, 
    0xc4, 
    0xb3, 
    0x14, MP_QSTR_socket & 0xff, MP_QSTR_socket >> 8, 
    0xb4, 
    0x80, 
    0x55, 
    0xb4, 
    0x81, 
    0x55, 
    0xb4, 
    0x82, 
    0x55, 
    0x36, 0x03, 
    0xc5, 
    0x12, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0xb5, 
    0x34, 0x01, 
    0xc6, 
    0x48, 0x0d, 0x00, 
    0xb5, 
    0x14, MP_QSTR_connect & 0xff, MP_QSTR_connect >> 8, 
    0xb4, 
    0x7f, 
    0x55, 
    0x36, 0x01, 
    0x59, 
    0x4a, 0x21, 0x00, 
    0x57, 
    0x12, MP_QSTR_OSError & 0xff, MP_QSTR_OSError >> 8, 
    0xdf, 
    0x44, 0x18, 0x80, 
    0xc7, 
    0x49, 0x0c, 0x00, 
    0xb7, 
    0x13, MP_QSTR_errno & 0xff, MP_QSTR_errno >> 8, 
    0xb2, 
    0xdc, 
    0x44, 0x02, 0x80, 
    0xb7, 
    0x65, 
    0x51, 
    0x51, 
    0xc7, 
    0x28, 0x07, 
    0x5d, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_write & 0xff, MP_QSTR_queue_write >> 8, 
    0xb5, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0xb6, 
    0xb6, 
    0x2a, 0x02, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__open_connection[2] = {
    MP_ROM_QSTR(MP_QSTR_host),
    MP_ROM_QSTR(MP_QSTR_port),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__open_connection = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__open_connection,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__open_connection,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 130,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_open_connection,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__open_connection + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__open_connection + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Server___aenter__
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Server___aenter__[10] = {
    0x89, 0x40, 0x0a,
    MP_QSTR___aenter__ & 0xff, MP_QSTR___aenter__ >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Server___aenter__[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Server___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Server___aenter__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Server___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___aenter__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Server___aenter__ + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Server___aenter__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Server___aexit__
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Server___aexit__[27] = {
    0xa8, 0x44, 0x0a,
    MP_QSTR___aexit__ & 0xff, MP_QSTR___aexit__ >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x14, MP_QSTR_close & 0xff, MP_QSTR_close >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_wait_closed & 0xff, MP_QSTR_wait_closed >> 8, 
    0x36, 0x00, 
    0x5e, 
    0x51, 
    0x68, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Server___aexit__[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_exc_type),
    MP_ROM_QSTR(MP_QSTR_exc),
    MP_ROM_QSTR(MP_QSTR_tb),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Server___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Server___aexit__,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Server___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___aexit__,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Server___aexit__ + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Server___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Server_close
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Server_close[19] = {
    0x11, 0x0a,
    MP_QSTR_close & 0xff, MP_QSTR_close >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_task & 0xff, MP_QSTR_task >> 8, 
    0x14, MP_QSTR_cancel & 0xff, MP_QSTR_cancel >> 8, 
    0x36, 0x00, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Server_close[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Server_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Server_close,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Server_close,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_close,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Server_close + 6,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Server_close + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Server_wait_closed
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Server_wait_closed[18] = {
    0x91, 0x40, 0x0a,
    MP_QSTR_wait_closed & 0xff, MP_QSTR_wait_closed >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb0, 
    0x13, MP_QSTR_task & 0xff, MP_QSTR_task >> 8, 
    0x5e, 
    0x51, 
    0x68, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Server_wait_closed[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Server_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Server_wait_closed,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Server_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_wait_closed,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Server_wait_closed + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Server_wait_closed + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Server__serve
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Server__serve[119] = {
    0xdf, 0x40, 0x0a,
    MP_QSTR__serve & 0xff, MP_QSTR__serve >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x48, 0x11, 0x00, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR__io_queue & 0xff, MP_QSTR__io_queue >> 8, 
    0x14, MP_QSTR_queue_read & 0xff, MP_QSTR_queue_read >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x67, 
    0x59, 
    0x4a, 0x19, 0x00, 
    0x57, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x13, MP_QSTR_CancelledError & 0xff, MP_QSTR_CancelledError >> 8, 
    0xdf, 
    0x44, 0x0d, 0x80, 
    0x59, 
    0xb1, 
    0x14, MP_QSTR_close & 0xff, MP_QSTR_close >> 8, 
    0x36, 0x00, 
    0x59, 
    0x51, 
    0x63, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x48, 0x0d, 0x00, 
    0xb1, 
    0x14, MP_QSTR_accept & 0xff, MP_QSTR_accept >> 8, 
    0x36, 0x00, 
    0x30, 0x02, 
    0xc3, 
    0xc4, 
    0x4a, 0x09, 0x00, 
    0x59, 
    0x40, 0x29, 0x80, 0x01, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0xb3, 
    0x14, MP_QSTR_settimeout & 0xff, MP_QSTR_settimeout >> 8, 
    0x80, 
    0x36, 0x01, 
    0x59, 
    0x12, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0xb3, 
    0x2c, 0x01, 
    0xb4, 
    0x10, MP_QSTR_peername & 0xff, MP_QSTR_peername >> 8, 
    0x62, 
    0x34, 0x02, 
    0xc5, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x14, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0xb2, 
    0xb5, 
    0xb5, 
    0x34, 0x02, 
    0x36, 0x01, 
    0x59, 
    0x42, 0x93, 0x7f, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Server__serve[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
    MP_ROM_QSTR(MP_QSTR_cb),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Server__serve = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Server__serve,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Server__serve,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 119,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 1,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__serve,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Server__serve + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Server__serve + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__Server
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__Server[46] = {
    0x00, 0x0a,
    MP_QSTR_Server & 0xff, MP_QSTR_Server >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_Server & 0xff, MP_QSTR_Server >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___aenter__ & 0xff, MP_QSTR___aenter__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR___aexit__ & 0xff, MP_QSTR___aexit__ >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR_close & 0xff, MP_QSTR_close >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_wait_closed & 0xff, MP_QSTR_wait_closed >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR__serve & 0xff, MP_QSTR__serve >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__Server[5] = {
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Server___aenter__),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Server___aexit__),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Server_close),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Server_wait_closed),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Server__serve),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__Server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__Server,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__Server,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 46,
    .n_obj = 0,
    .n_raw_code = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_Server,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__Server + 6,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__Server + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__start_server
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__start_server[78] = {
    0xe0, 0x45, 0x0a,
    MP_QSTR_start_server & 0xff, MP_QSTR_start_server >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x80, 
    0x51, 
    0x1b, MP_QSTR_usocket & 0xff, MP_QSTR_usocket >> 8, 
    0xc4, 
    0xb4, 
    0x14, MP_QSTR_getaddrinfo & 0xff, MP_QSTR_getaddrinfo >> 8, 
    0xb1, 
    0xb2, 
    0x36, 0x02, 
    0x80, 
    0x55, 
    0xc1, 
    0xb4, 
    0x14, MP_QSTR_socket & 0xff, MP_QSTR_socket >> 8, 
    0x36, 0x00, 
    0xc5, 
    0xb5, 
    0x14, MP_QSTR_bind & 0xff, MP_QSTR_bind >> 8, 
    0xb1, 
    0x7f, 
    0x55, 
    0x36, 0x01, 
    0x59, 
    0xb5, 
    0x14, MP_QSTR_listen & 0xff, MP_QSTR_listen >> 8, 
    0xb3, 
    0x36, 0x01, 
    0x59, 
    0x12, MP_QSTR_Server & 0xff, MP_QSTR_Server >> 8, 
    0x34, 0x00, 
    0xc6, 
    0x12, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x14, MP_QSTR_create_task & 0xff, MP_QSTR_create_task >> 8, 
    0xb6, 
    0x14, MP_QSTR__serve & 0xff, MP_QSTR__serve >> 8, 
    0xb5, 
    0xb0, 
    0x36, 0x02, 
    0x36, 0x01, 
    0xb6, 
    0x18, MP_QSTR_task & 0xff, MP_QSTR_task >> 8, 
    0xb6, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__start_server[4] = {
    MP_ROM_QSTR(MP_QSTR_cb),
    MP_ROM_QSTR(MP_QSTR_host),
    MP_ROM_QSTR(MP_QSTR_port),
    MP_ROM_QSTR(MP_QSTR_backlog),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__start_server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__start_server,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__start_server,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 78,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_start_server,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__start_server + 7,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__start_server + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt__stream_awrite
STATIC const byte fun_data_uasyncio_stream__lt_module_gt__stream_awrite[70] = {
    0xb8, 0xc4, 0x01, 0x0a,
    MP_QSTR_stream_awrite & 0xff, MP_QSTR_stream_awrite >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0xb2, 
    0x80, 
    0xdc, 
    0x43, 0x06, 0x80, 
    0xb3, 
    0x7f, 
    0xdc, 
    0x44, 0x1d, 0x80, 
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xc1, 
    0xb3, 
    0x7f, 
    0xd9, 
    0x44, 0x07, 0x80, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xc3, 
    0xb1, 
    0xb2, 
    0xb2, 
    0xb3, 
    0xf2, 
    0x2e, 0x02, 
    0x55, 
    0xc1, 
    0xb0, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_drain & 0xff, MP_QSTR_drain >> 8, 
    0x36, 0x00, 
    0x5e, 
    0x51, 
    0x68, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt__stream_awrite[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
    MP_ROM_QSTR(MP_QSTR_off),
    MP_ROM_QSTR(MP_QSTR_sz),
};
STATIC const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt__stream_awrite = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt__stream_awrite,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt__stream_awrite,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 70,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name = MP_QSTR_stream_awrite,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt__stream_awrite + 8,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt__stream_awrite + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_<module>
STATIC const byte fun_data_uasyncio_stream__lt_module_gt_[113] = {
    0x10, 0x0a,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_uasyncio_slash_stream_dot_py & 0xff, MP_QSTR_uasyncio_slash_stream_dot_py >> 8,
    0x00,
    0x81, 
    0x10, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_ & 0xff, MP_QSTR_ >> 8, 
    0x1c, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x16, MP_QSTR_core & 0xff, MP_QSTR_core >> 8, 
    0x59, 
    0x54, 
    0x32, 0x00, 
    0x10, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x11, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x16, MP_QSTR_StreamReader & 0xff, MP_QSTR_StreamReader >> 8, 
    0x11, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x16, MP_QSTR_StreamWriter & 0xff, MP_QSTR_StreamWriter >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_open_connection & 0xff, MP_QSTR_open_connection >> 8, 
    0x54, 
    0x32, 0x02, 
    0x10, MP_QSTR_Server & 0xff, MP_QSTR_Server >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_Server & 0xff, MP_QSTR_Server >> 8, 
    0x85, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x03, 
    0x16, MP_QSTR_start_server & 0xff, MP_QSTR_start_server >> 8, 
    0x80, 
    0x7f, 
    0x2a, 0x02, 
    0x53, 
    0x33, 0x04, 
    0x16, MP_QSTR_stream_awrite & 0xff, MP_QSTR_stream_awrite >> 8, 
    0x11, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x13, MP_QSTR_wait_closed & 0xff, MP_QSTR_wait_closed >> 8, 
    0x11, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x18, MP_QSTR_aclose & 0xff, MP_QSTR_aclose >> 8, 
    0x11, MP_QSTR_stream_awrite & 0xff, MP_QSTR_stream_awrite >> 8, 
    0x11, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x18, MP_QSTR_awrite & 0xff, MP_QSTR_awrite >> 8, 
    0x11, MP_QSTR_stream_awrite & 0xff, MP_QSTR_stream_awrite >> 8, 
    0x11, MP_QSTR_Stream & 0xff, MP_QSTR_Stream >> 8, 
    0x18, MP_QSTR_awritestr & 0xff, MP_QSTR_awritestr >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_uasyncio_stream__lt_module_gt_[5] = {
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Stream),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__open_connection),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__Server),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__start_server),
    MP_ROM_PTR(&raw_code_uasyncio_stream__lt_module_gt__stream_awrite),
};
const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_uasyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 113,
    .n_obj = 0,
    .n_raw_code = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_uasyncio_slash_stream_dot_py,
        .line_info = fun_data_uasyncio_stream__lt_module_gt_ + 6,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHTBase___init__
STATIC const byte fun_data_dht__lt_module_gt__DHTBase___init__[27] = {
    0x1a, 0x10,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x80, 0x0f, 0x25, 0x00,
    0xb1, 
    0xb0, 
    0x18, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x85, 
    0x34, 0x01, 
    0xb0, 
    0x18, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHTBase___init__[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_pin),
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHTBase___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_dht__lt_module_gt__DHTBase___init__,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHTBase___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHTBase___init__ + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHTBase___init__ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHTBase_measure
STATIC const byte fun_data_dht__lt_module_gt__DHTBase_measure[64] = {
    0x21, 0x14,
    MP_QSTR_measure & 0xff, MP_QSTR_measure >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x80, 0x13, 0x25, 0x2b, 0x3a, 0x00,
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0xc1, 
    0x12, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0xb1, 
    0x34, 0x02, 
    0x59, 
    0xb1, 
    0x80, 
    0x55, 
    0xb1, 
    0x81, 
    0x55, 
    0xf2, 
    0xb1, 
    0x82, 
    0x55, 
    0xf2, 
    0xb1, 
    0x83, 
    0x55, 
    0xf2, 
    0x22, 0x81, 0x7f, 
    0xef, 
    0xb1, 
    0x84, 
    0x55, 
    0xdc, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_Exception & 0xff, MP_QSTR_Exception >> 8, 
    0x23, 0x01, 
    0x34, 0x01, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_dht__lt_module_gt__DHTBase_measure_0 = {{&mp_type_str}, 53040, 14, (const byte*)"\x63\x68\x65\x63\x6b\x73\x75\x6d\x20\x65\x72\x72\x6f\x72"};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHTBase_measure[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_dht__lt_module_gt__DHTBase_measure_0),
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHTBase_measure = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht__lt_module_gt__DHTBase_measure,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHTBase_measure,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 64,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_measure,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHTBase_measure + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHTBase_measure + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHTBase
STATIC const byte fun_data_dht__lt_module_gt__DHTBase[35] = {
    0x00, 0x12,
    MP_QSTR_DHTBase & 0xff, MP_QSTR_DHTBase >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x8c, 0x0e, 0x65, 0x20, 0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_DHTBase & 0xff, MP_QSTR_DHTBase >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_measure & 0xff, MP_QSTR_measure >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHTBase[2] = {
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHTBase___init__),
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHTBase_measure),
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHTBase = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht__lt_module_gt__DHTBase,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 35,
    .n_obj = 0,
    .n_raw_code = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_DHTBase,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHTBase + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHTBase + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHT11_humidity
STATIC const byte fun_data_dht__lt_module_gt__DHT11_humidity[16] = {
    0x11, 0x0e,
    MP_QSTR_humidity & 0xff, MP_QSTR_humidity >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x80, 0x1b, 0x00,
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x80, 
    0x55, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHT11_humidity[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHT11_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht__lt_module_gt__DHT11_humidity,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHT11_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_humidity,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHT11_humidity + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHT11_humidity + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHT11_temperature
STATIC const byte fun_data_dht__lt_module_gt__DHT11_temperature[16] = {
    0x11, 0x0e,
    MP_QSTR_temperature & 0xff, MP_QSTR_temperature >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x80, 0x1e, 0x00,
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x82, 
    0x55, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHT11_temperature[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHT11_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht__lt_module_gt__DHT11_temperature,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHT11_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_temperature,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHT11_temperature + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHT11_temperature + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHT11
STATIC const byte fun_data_dht__lt_module_gt__DHT11[34] = {
    0x00, 0x10,
    MP_QSTR_DHT11 & 0xff, MP_QSTR_DHT11 >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x8c, 0x1a, 0x65, 0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_DHT11 & 0xff, MP_QSTR_DHT11 >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR_humidity & 0xff, MP_QSTR_humidity >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_temperature & 0xff, MP_QSTR_temperature >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHT11[2] = {
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHT11_humidity),
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHT11_temperature),
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHT11 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht__lt_module_gt__DHT11,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 34,
    .n_obj = 0,
    .n_raw_code = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_DHT11,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHT11 + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHT11 + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHT22_humidity
STATIC const byte fun_data_dht__lt_module_gt__DHT22_humidity[28] = {
    0x19, 0x0e,
    MP_QSTR_humidity & 0xff, MP_QSTR_humidity >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x80, 0x23, 0x00,
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x80, 
    0x55, 
    0x88, 
    0xf0, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x81, 
    0x55, 
    0xed, 
    0x23, 0x01, 
    0xf4, 
    0x63, 
};
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_dht__lt_module_gt__DHT22_humidity_0 = {{&mp_type_float}, (mp_float_t)0.1};
#endif
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHT22_humidity[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_dht__lt_module_gt__DHT22_humidity_0),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbe4cccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfbd99999999999a),
#endif
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHT22_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht__lt_module_gt__DHT22_humidity,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHT22_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 28,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_humidity,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHT22_humidity + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHT22_humidity + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHT22_temperature
STATIC const byte fun_data_dht__lt_module_gt__DHT22_temperature[53] = {
    0x21, 0x14,
    MP_QSTR_temperature & 0xff, MP_QSTR_temperature >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x80, 0x26, 0x37, 0x2d, 0x23, 0x00,
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x82, 
    0x55, 
    0x22, 0x80, 0x7f, 
    0xef, 
    0x88, 
    0xf0, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x83, 
    0x55, 
    0xed, 
    0x23, 0x01, 
    0xf4, 
    0xc1, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x82, 
    0x55, 
    0x22, 0x81, 0x00, 
    0xef, 
    0x44, 0x03, 0x80, 
    0xb1, 
    0xd1, 
    0xc1, 
    0xb1, 
    0x63, 
};
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_dht__lt_module_gt__DHT22_temperature_0 = {{&mp_type_float}, (mp_float_t)0.1};
#endif
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHT22_temperature[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_dht__lt_module_gt__DHT22_temperature_0),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbe4cccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfbd99999999999a),
#endif
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHT22_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht__lt_module_gt__DHT22_temperature,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHT22_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 53,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_temperature,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHT22_temperature + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHT22_temperature + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht__lt_module_gt__DHT22
STATIC const byte fun_data_dht__lt_module_gt__DHT22[34] = {
    0x00, 0x10,
    MP_QSTR_DHT22 & 0xff, MP_QSTR_DHT22 >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x8c, 0x22, 0x65, 0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_DHT22 & 0xff, MP_QSTR_DHT22 >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR_humidity & 0xff, MP_QSTR_humidity >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR_temperature & 0xff, MP_QSTR_temperature >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt__DHT22[2] = {
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHT22_humidity),
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHT22_temperature),
};
STATIC const mp_raw_code_t raw_code_dht__lt_module_gt__DHT22 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht__lt_module_gt__DHT22,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt__DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 34,
    .n_obj = 0,
    .n_raw_code = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_DHT22,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt__DHT22 + 6,
        .opcodes = fun_data_dht__lt_module_gt__DHT22 + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file dht.py, scope dht_<module>
STATIC const byte fun_data_dht__lt_module_gt_[151] = {
    0x18, 0x20,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_dht_dot_py & 0xff, MP_QSTR_dht_dot_py >> 8,
    0x60, 0x48, 0x31, 0x33, 0x2d, 0x53, 0x70, 0x8b, 0x0c, 0x8e, 0x08, 0x00,
    0x80, 
    0x51, 
    0x1b, MP_QSTR_sys & 0xff, MP_QSTR_sys >> 8, 
    0x16, MP_QSTR_sys & 0xff, MP_QSTR_sys >> 8, 
    0x11, MP_QSTR_sys & 0xff, MP_QSTR_sys >> 8, 
    0x13, MP_QSTR_platform & 0xff, MP_QSTR_platform >> 8, 
    0x14, MP_QSTR_startswith & 0xff, MP_QSTR_startswith >> 8, 
    0x10, MP_QSTR_esp & 0xff, MP_QSTR_esp >> 8, 
    0x36, 0x01, 
    0x44, 0x13, 0x80, 
    0x80, 
    0x10, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_esp & 0xff, MP_QSTR_esp >> 8, 
    0x1c, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x16, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x59, 
    0x42, 0x30, 0x80, 
    0x11, MP_QSTR_sys & 0xff, MP_QSTR_sys >> 8, 
    0x13, MP_QSTR_platform & 0xff, MP_QSTR_platform >> 8, 
    0x10, MP_QSTR_mimxrt & 0xff, MP_QSTR_mimxrt >> 8, 
    0xd9, 
    0x44, 0x13, 0x80, 
    0x80, 
    0x10, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_mimxrt & 0xff, MP_QSTR_mimxrt >> 8, 
    0x1c, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x16, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x59, 
    0x42, 0x10, 0x80, 
    0x80, 
    0x10, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_pyb & 0xff, MP_QSTR_pyb >> 8, 
    0x1c, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x16, MP_QSTR_dht_readinto & 0xff, MP_QSTR_dht_readinto >> 8, 
    0x59, 
    0x54, 
    0x32, 0x00, 
    0x10, MP_QSTR_DHTBase & 0xff, MP_QSTR_DHTBase >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_DHTBase & 0xff, MP_QSTR_DHTBase >> 8, 
    0x54, 
    0x32, 0x01, 
    0x10, MP_QSTR_DHT11 & 0xff, MP_QSTR_DHT11 >> 8, 
    0x11, MP_QSTR_DHTBase & 0xff, MP_QSTR_DHTBase >> 8, 
    0x34, 0x03, 
    0x16, MP_QSTR_DHT11 & 0xff, MP_QSTR_DHT11 >> 8, 
    0x54, 
    0x32, 0x02, 
    0x10, MP_QSTR_DHT22 & 0xff, MP_QSTR_DHT22 >> 8, 
    0x11, MP_QSTR_DHTBase & 0xff, MP_QSTR_DHTBase >> 8, 
    0x34, 0x03, 
    0x16, MP_QSTR_DHT22 & 0xff, MP_QSTR_DHT22 >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_dht__lt_module_gt_[3] = {
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHTBase),
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHT11),
    MP_ROM_PTR(&raw_code_dht__lt_module_gt__DHT22),
};
const mp_raw_code_t raw_code_dht__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 151,
    .n_obj = 0,
    .n_raw_code = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_dht_dot_py,
        .line_info = fun_data_dht__lt_module_gt_ + 6,
        .opcodes = fun_data_dht__lt_module_gt_ + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR___init__
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR___init__[390] = {
    0x8a, 0x91, 0x80, 0x88, 0x40, 0x50,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x22, 0x33, 0x24, 0x24, 0x29, 0x28, 0x22, 0x22, 0x47, 0x32, 0x48, 0x26, 0x33, 0x26, 0x32, 0x26, 0x5b, 0x29, 0x25, 0x67, 0x60, 0x25, 0x25, 0x25, 0x65, 0x2a, 0x2a, 0x29, 0x26, 0x3d, 0x2a, 0x6a, 0x28, 0x37, 0x00,
    0xb1, 
    0x10, MP_QSTR_X & 0xff, MP_QSTR_X >> 8, 
    0x10, MP_QSTR_Y & 0xff, MP_QSTR_Y >> 8, 
    0x10, MP_QSTR_XY & 0xff, MP_QSTR_XY >> 8, 
    0x10, MP_QSTR_YX & 0xff, MP_QSTR_YX >> 8, 
    0x2a, 0x04, 
    0xdd, 
    0x44, 0x11, 0x80, 
    0xb1, 
    0x7f, 
    0x55, 
    0xc6, 
    0xb1, 
    0x80, 
    0x55, 
    0xc7, 
    0xb7, 
    0x10, MP_QSTR_4 & 0xff, MP_QSTR_4 >> 8, 
    0xf2, 
    0xc8, 
    0x42, 0x2d, 0x80, 
    0xb1, 
    0x10, MP_QSTR_C & 0xff, MP_QSTR_C >> 8, 
    0xd9, 
    0x44, 0x0b, 0x80, 
    0x82, 
    0xc6, 
    0x82, 
    0xc7, 
    0x10, MP_QSTR_A7 & 0xff, MP_QSTR_A7 >> 8, 
    0xc8, 
    0x42, 0x1a, 0x80, 
    0xb2, 
    0x51, 
    0xde, 
    0x43, 0x0c, 0x80, 
    0xb3, 
    0x51, 
    0xde, 
    0x43, 0x06, 0x80, 
    0xb4, 
    0x51, 
    0xde, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_ValueError & 0xff, MP_QSTR_ValueError >> 8, 
    0x23, 0x06, 
    0x34, 0x01, 
    0x65, 
    0xb2, 
    0x51, 
    0xde, 
    0x44, 0x13, 0x80, 
    0x12, MP_QSTR_machine & 0xff, MP_QSTR_machine >> 8, 
    0x14, MP_QSTR_Pin & 0xff, MP_QSTR_Pin >> 8, 
    0xb8, 
    0x12, MP_QSTR_machine & 0xff, MP_QSTR_machine >> 8, 
    0x13, MP_QSTR_Pin & 0xff, MP_QSTR_Pin >> 8, 
    0x13, MP_QSTR_OUT & 0xff, MP_QSTR_OUT >> 8, 
    0x36, 0x02, 
    0xc2, 
    0xb3, 
    0x51, 
    0xde, 
    0x44, 0x12, 0x80, 
    0x12, MP_QSTR_machine & 0xff, MP_QSTR_machine >> 8, 
    0x14, MP_QSTR_I2C & 0xff, MP_QSTR_I2C >> 8, 
    0xb6, 
    0x10, MP_QSTR_freq & 0xff, MP_QSTR_freq >> 8, 
    0x22, 0xbd, 0x84, 0x40, 
    0x36, 0x82, 0x01, 
    0xc3, 
    0xb4, 
    0x51, 
    0xde, 
    0x44, 0x1b, 0x80, 
    0x12, MP_QSTR_machine & 0xff, MP_QSTR_machine >> 8, 
    0x14, MP_QSTR_SPI & 0xff, MP_QSTR_SPI >> 8, 
    0xb7, 
    0x10, MP_QSTR_baudrate & 0xff, MP_QSTR_baudrate >> 8, 
    0x22, 0x86, 0xb7, 0xfc, 0x60, 
    0x10, MP_QSTR_polarity & 0xff, MP_QSTR_polarity >> 8, 
    0x80, 
    0x10, MP_QSTR_phase & 0xff, MP_QSTR_phase >> 8, 
    0x80, 
    0x36, 0x86, 0x01, 
    0xc4, 
    0xb2, 
    0x14, MP_QSTR_value & 0xff, MP_QSTR_value >> 8, 
    0x36, 0x00, 
    0x43, 0x0c, 0x80, 
    0xb2, 
    0x81, 
    0x34, 0x01, 
    0x59, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x8a, 
    0x34, 0x01, 
    0x59, 
    0xb2, 
    0xb0, 
    0x18, MP_QSTR_pwr & 0xff, MP_QSTR_pwr >> 8, 
    0xb3, 
    0xb0, 
    0x18, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0xb4, 
    0xb0, 
    0x18, MP_QSTR_spi & 0xff, MP_QSTR_spi >> 8, 
    0xb5, 
    0xb0, 
    0x18, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x90, 
    0x34, 0x01, 
    0xb0, 
    0x18, MP_QSTR_buf16 & 0xff, MP_QSTR_buf16 >> 8, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x93, 
    0x34, 0x01, 
    0xb0, 
    0x18, MP_QSTR_buf19 & 0xff, MP_QSTR_buf19 >> 8, 
    0x51, 
    0x2b, 0x01, 
    0x8a, 
    0xf4, 
    0xb0, 
    0x18, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x81, 
    0x42, 0x18, 0x80, 
    0x57, 
    0xc6, 
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf16 & 0xff, MP_QSTR_buf16 >> 8, 
    0x34, 0x01, 
    0x80, 
    0xb6, 
    0x2e, 0x02, 
    0x55, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0xb6, 
    0x56, 
    0x81, 
    0xe5, 
    0x57, 
    0x8a, 
    0xd7, 
    0x43, 0xe2, 0x7f, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x81, 
    0x55, 
    0xb0, 
    0x18, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x80, 
    0x80, 
    0x80, 
    0x80, 
    0x2b, 0x04, 
    0xb0, 
    0x18, MP_QSTR_array4 & 0xff, MP_QSTR_array4 >> 8, 
    0xb0, 
    0x14, MP_QSTR_set_orient & 0xff, MP_QSTR_set_orient >> 8, 
    0x80, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x76, 
    0x80, 
    0x80, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x36, 0x06, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x79, 
    0x80, 
    0x80, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x36, 0x06, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR___init___0 = {{&mp_type_str}, 26676, 61, (const byte*)"\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x76\x61\x6c\x69\x64\x20\x22\x63\x6f\x6e\x6e\x65\x63\x74\x22\x20\x6f\x72\x20\x61\x6c\x6c\x20\x6f\x66\x20\x22\x70\x77\x72\x22\x2c\x20\x22\x69\x32\x63\x22\x20\x61\x6e\x64\x20\x22\x73\x70\x69\x22"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR___init__[7] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_connect),
    MP_ROM_QSTR(MP_QSTR_pwr),
    MP_ROM_QSTR(MP_QSTR_i2c),
    MP_ROM_QSTR(MP_QSTR_spi),
    MP_ROM_QSTR(MP_QSTR_i2c_addr),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR___init___0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x08,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR___init__,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 390,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 18,
        .n_exc_stack = 0,
        .scope_flags = 8,
        .n_pos_args = 2,
        .n_kwonly_args = 4,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR___init__ + 10,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR___init__ + 46,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR__send
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR__send[102] = {
    0x52, 0x20,
    MP_QSTR__send & 0xff, MP_QSTR__send >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x51, 0x2f, 0x2b, 0x22, 0x27, 0x27, 0x20, 0x36, 0x26, 0x22, 0x00,
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_writeto & 0xff, MP_QSTR_writeto >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb1, 
    0x36, 0x02, 
    0xc2, 
    0xb2, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xd9, 
    0x44, 0x02, 0x80, 
    0x51, 
    0x63, 
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xc1, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xc3, 
    0xb2, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_writeto & 0xff, MP_QSTR_writeto >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb1, 
    0xb2, 
    0x51, 
    0x2e, 0x02, 
    0x55, 
    0x36, 0x02, 
    0xe5, 
    0xc2, 
    0xb2, 
    0xb3, 
    0xd9, 
    0x44, 0x02, 0x80, 
    0x51, 
    0x63, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x8a, 
    0x34, 0x01, 
    0x59, 
    0x42, 0xd8, 0x7f, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR__send[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_cmd),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR__send = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR__send,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR__send,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 102,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__send,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR__send + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR__send + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR__fcmd2
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2[48] = {
    0xe9, 0x84, 0x01, 0x12,
    MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x5d, 0x2c, 0x2d, 0x00,
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x12, MP_QSTR_calcsize & 0xff, MP_QSTR_calcsize >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x55, 
    0xc5, 
    0x12, MP_QSTR_pack_into & 0xff, MP_QSTR_pack_into >> 8, 
    0xb1, 
    0xb5, 
    0x80, 
    0x82, 
    0xb2, 
    0xb3, 
    0xb4, 
    0x34, 0x07, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb5, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_fmt),
    MP_ROM_QSTR(MP_QSTR_a0),
    MP_ROM_QSTR(MP_QSTR_a1),
    MP_ROM_QSTR(MP_QSTR_a2),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR__fcmd2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 48,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name = MP_QSTR__fcmd2,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2 + 8,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2 + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR__fcmd2b
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2b[49] = {
    0x8b, 0x15, 0x12,
    MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x62, 0x2c, 0x2f, 0x00,
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x12, MP_QSTR_calcsize & 0xff, MP_QSTR_calcsize >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x55, 
    0xc7, 
    0x12, MP_QSTR_pack_into & 0xff, MP_QSTR_pack_into >> 8, 
    0xb1, 
    0xb7, 
    0x80, 
    0x82, 
    0xb2, 
    0xb3, 
    0xb4, 
    0xb5, 
    0xb6, 
    0x34, 0x09, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb7, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2b[7] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_fmt),
    MP_ROM_QSTR(MP_QSTR_a0),
    MP_ROM_QSTR(MP_QSTR_a1),
    MP_ROM_QSTR(MP_QSTR_a2),
    MP_ROM_QSTR(MP_QSTR_a3),
    MP_ROM_QSTR(MP_QSTR_a4),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR__fcmd2b = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 7,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2b,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2b,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 49,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 18,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 7,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR__fcmd2b,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2b + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR__fcmd2b + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR__waitfor
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR__waitfor[99] = {
    0x3b, 0x1e,
    MP_QSTR__waitfor & 0xff, MP_QSTR__waitfor >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x67, 0x24, 0x23, 0x32, 0x2b, 0x2f, 0x22, 0x24, 0x2b, 0x00,
    0x22, 0xa7, 0x08, 
    0xc3, 
    0x42, 0x39, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x80, 
    0x55, 
    0xb1, 
    0xdb, 
    0x44, 0x11, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb2, 
    0x36, 0x02, 
    0x59, 
    0x51, 
    0x63, 
    0xb3, 
    0x81, 
    0xe6, 
    0xc3, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x81, 
    0x34, 0x01, 
    0x59, 
    0xb3, 
    0x43, 0xc3, 0x7f, 
    0x12, MP_QSTR_OSError & 0xff, MP_QSTR_OSError >> 8, 
    0x12, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x13, MP_QSTR_ETIMEDOUT & 0xff, MP_QSTR_ETIMEDOUT >> 8, 
    0x34, 0x01, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR__waitfor[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_n),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR__waitfor = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR__waitfor,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR__waitfor,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 99,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__waitfor,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR__waitfor + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR__waitfor + 17,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_oflush
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_oflush[91] = {
    0xba, 0x01, 0x1e,
    MP_QSTR_oflush & 0xff, MP_QSTR_oflush >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x72, 0x24, 0x23, 0x34, 0x27, 0x26, 0x22, 0x24, 0x2d, 0x00,
    0x22, 0xa7, 0x08, 
    0xc2, 
    0x42, 0x30, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0x81, 
    0xf2, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x80, 
    0x55, 
    0xc3, 
    0xb3, 
    0xb1, 
    0xdb, 
    0x44, 0x02, 0x80, 
    0x51, 
    0x63, 
    0xb2, 
    0x81, 
    0xe6, 
    0xc2, 
    0x12, MP_QSTR_machine & 0xff, MP_QSTR_machine >> 8, 
    0x14, MP_QSTR_idle & 0xff, MP_QSTR_idle >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb2, 
    0x43, 0xcc, 0x7f, 
    0x12, MP_QSTR_OSError & 0xff, MP_QSTR_OSError >> 8, 
    0x12, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x13, MP_QSTR_ETIMEDOUT & 0xff, MP_QSTR_ETIMEDOUT >> 8, 
    0x34, 0x01, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_oflush[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_n),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_oflush = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_oflush,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_oflush,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 91,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_oflush,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_oflush + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_oflush + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_iflush
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_iflush[83] = {
    0x29, 0x1c,
    MP_QSTR_iflush & 0xff, MP_QSTR_iflush >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x7d, 0x24, 0x23, 0x32, 0x2b, 0x22, 0x24, 0x2b, 0x00,
    0x22, 0xa7, 0x08, 
    0xc1, 
    0x42, 0x2a, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf16 & 0xff, MP_QSTR_buf16 >> 8, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf16 & 0xff, MP_QSTR_buf16 >> 8, 
    0x80, 
    0x55, 
    0x80, 
    0xd9, 
    0x44, 0x02, 0x80, 
    0x51, 
    0x63, 
    0xb1, 
    0x81, 
    0xe6, 
    0xc1, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x81, 
    0x34, 0x01, 
    0x59, 
    0xb1, 
    0x43, 0xd2, 0x7f, 
    0x12, MP_QSTR_OSError & 0xff, MP_QSTR_OSError >> 8, 
    0x12, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x13, MP_QSTR_ETIMEDOUT & 0xff, MP_QSTR_ETIMEDOUT >> 8, 
    0x34, 0x01, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_iflush[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_iflush = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_iflush,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_iflush,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 83,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_iflush,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_iflush + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_iflush + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_rgb
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_rgb[29] = {
    0x2b, 0x0e,
    MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x8a, 0x00,
    0xb2, 
    0x22, 0x81, 0x78, 
    0xef, 
    0x88, 
    0xf0, 
    0xb1, 
    0x22, 0x81, 0x7c, 
    0xef, 
    0x83, 
    0xf0, 
    0xed, 
    0xb0, 
    0x83, 
    0xf1, 
    0xed, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_rgb[3] = {
    MP_ROM_QSTR(MP_QSTR_r),
    MP_ROM_QSTR(MP_QSTR_g),
    MP_ROM_QSTR(MP_QSTR_b),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_rgb = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_rgb,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_rgb,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 29,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_rgb,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_rgb + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_rgb + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_clip_line
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_clip_line[599] = {
    0x5b, 0x7c,
    MP_QSTR_clip_line & 0xff, MP_QSTR_clip_line >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0x8e, 0x20, 0x24, 0x28, 0x27, 0x28, 0x27, 0x28, 0x27, 0x28, 0x27, 0x28, 0x27, 0x28, 0x27, 0x28, 0x27, 0x28, 0x27, 0x26, 0x22, 0x26, 0x24, 0x26, 0x2a, 0x2d, 0x2d, 0x3b, 0x27, 0x26, 0x2a, 0x2d, 0x2d, 0x3e, 0x29, 0x26, 0x2a, 0x28, 0x26, 0x28, 0x49, 0x2a, 0x2d, 0x2d, 0x3e, 0x49, 0x2a, 0x28, 0x24, 0x28, 0x47, 0x2a, 0x2d, 0x2d, 0x3b, 0x47, 0x00,
    0x80, 
    0x57, 
    0xc3, 
    0xc4, 
    0xb0, 
    0x81, 
    0x55, 
    0x80, 
    0xd7, 
    0x44, 0x07, 0x80, 
    0xb3, 
    0x88, 
    0xe0, 
    0xc3, 
    0x42, 0x0f, 0x80, 
    0xb0, 
    0x81, 
    0x55, 
    0xb2, 
    0xd8, 
    0x44, 0x07, 0x80, 
    0xb3, 
    0x84, 
    0xe0, 
    0xc3, 
    0x42, 0x00, 0x80, 
    0xb0, 
    0x80, 
    0x55, 
    0x80, 
    0xd7, 
    0x44, 0x07, 0x80, 
    0xb3, 
    0x81, 
    0xe0, 
    0xc3, 
    0x42, 0x0f, 0x80, 
    0xb0, 
    0x80, 
    0x55, 
    0xb1, 
    0xd8, 
    0x44, 0x07, 0x80, 
    0xb3, 
    0x82, 
    0xe0, 
    0xc3, 
    0x42, 0x00, 0x80, 
    0xb0, 
    0x83, 
    0x55, 
    0x80, 
    0xd7, 
    0x44, 0x07, 0x80, 
    0xb4, 
    0x88, 
    0xe0, 
    0xc4, 
    0x42, 0x0f, 0x80, 
    0xb0, 
    0x83, 
    0x55, 
    0xb2, 
    0xd8, 
    0x44, 0x07, 0x80, 
    0xb4, 
    0x84, 
    0xe0, 
    0xc4, 
    0x42, 0x00, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0x80, 
    0xd7, 
    0x44, 0x07, 0x80, 
    0xb4, 
    0x81, 
    0xe0, 
    0xc4, 
    0x42, 0x0f, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0xb1, 
    0xd8, 
    0x44, 0x07, 0x80, 
    0xb4, 
    0x82, 
    0xe0, 
    0xc4, 
    0x42, 0x00, 0x80, 
    0xb3, 
    0xb4, 
    0xef, 
    0x44, 0x02, 0x80, 
    0x50, 
    0x63, 
    0xb3, 
    0xb4, 
    0xed, 
    0x44, 0x86, 0x81, 
    0xb3, 
    0xb4, 
    0xe0, 
    0xc3, 
    0xb3, 
    0x81, 
    0xef, 
    0x44, 0x46, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0xd7, 
    0x44, 0x1a, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0x5a, 
    0xb0, 
    0x80, 
    0x56, 
    0xb0, 
    0x82, 
    0x56, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0x5a, 
    0xb0, 
    0x81, 
    0x56, 
    0xb0, 
    0x83, 
    0x56, 
    0xb0, 
    0x81, 
    0x58, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0xd1, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0xf3, 
    0xf4, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0xf3, 
    0xf6, 
    0xe5, 
    0x5b, 
    0x56, 
    0x80, 
    0xb0, 
    0x80, 
    0x56, 
    0x42, 0x33, 0x81, 
    0xb3, 
    0x82, 
    0xef, 
    0x44, 0x4b, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0xd7, 
    0x44, 0x1a, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0x5a, 
    0xb0, 
    0x80, 
    0x56, 
    0xb0, 
    0x82, 
    0x56, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0x5a, 
    0xb0, 
    0x81, 
    0x56, 
    0xb0, 
    0x83, 
    0x56, 
    0xb0, 
    0x83, 
    0x58, 
    0x55, 
    0xb1, 
    0x81, 
    0xf3, 
    0xb0, 
    0x82, 
    0x55, 
    0xf3, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0xf3, 
    0xf4, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0xf3, 
    0xf6, 
    0xe5, 
    0x5b, 
    0x56, 
    0xb1, 
    0x81, 
    0xf3, 
    0xb0, 
    0x82, 
    0x56, 
    0x42, 0xe2, 0x80, 
    0xb3, 
    0x84, 
    0xef, 
    0x44, 0x74, 0x80, 
    0xb0, 
    0x80, 
    0x55, 
    0xb0, 
    0x82, 
    0x55, 
    0xd9, 
    0x44, 0x1f, 0x80, 
    0xb0, 
    0x81, 
    0x55, 
    0xb2, 
    0xdb, 
    0x44, 0x06, 0x80, 
    0xb2, 
    0x81, 
    0xf3, 
    0xb0, 
    0x81, 
    0x56, 
    0xb0, 
    0x83, 
    0x55, 
    0xb2, 
    0xdb, 
    0x44, 0x06, 0x80, 
    0xb2, 
    0x81, 
    0xf3, 
    0xb0, 
    0x83, 
    0x56, 
    0x42, 0x48, 0x80, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0xd7, 
    0x44, 0x1a, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0x5a, 
    0xb0, 
    0x80, 
    0x56, 
    0xb0, 
    0x82, 
    0x56, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0x5a, 
    0xb0, 
    0x81, 
    0x56, 
    0xb0, 
    0x83, 
    0x56, 
    0xb0, 
    0x82, 
    0x58, 
    0x55, 
    0xb2, 
    0x81, 
    0xf3, 
    0xb0, 
    0x83, 
    0x55, 
    0xf3, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0xf3, 
    0xf4, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0xf3, 
    0xf6, 
    0xe5, 
    0x5b, 
    0x56, 
    0xb2, 
    0x81, 
    0xf3, 
    0xb0, 
    0x83, 
    0x56, 
    0x42, 0x68, 0x80, 
    0xb0, 
    0x80, 
    0x55, 
    0xb0, 
    0x82, 
    0x55, 
    0xd9, 
    0x44, 0x1b, 0x80, 
    0xb0, 
    0x81, 
    0x55, 
    0x80, 
    0xd7, 
    0x44, 0x04, 0x80, 
    0x80, 
    0xb0, 
    0x81, 
    0x56, 
    0xb0, 
    0x83, 
    0x55, 
    0x80, 
    0xd7, 
    0x44, 0x04, 0x80, 
    0x80, 
    0xb0, 
    0x83, 
    0x56, 
    0x42, 0x43, 0x80, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0xd7, 
    0x44, 0x1a, 0x80, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0x5a, 
    0xb0, 
    0x80, 
    0x56, 
    0xb0, 
    0x82, 
    0x56, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0x5a, 
    0xb0, 
    0x81, 
    0x56, 
    0xb0, 
    0x83, 
    0x56, 
    0xb0, 
    0x80, 
    0x58, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0xd1, 
    0xb0, 
    0x82, 
    0x55, 
    0xb0, 
    0x80, 
    0x55, 
    0xf3, 
    0xf4, 
    0xb0, 
    0x83, 
    0x55, 
    0xb0, 
    0x81, 
    0x55, 
    0xf3, 
    0xf6, 
    0xe5, 
    0x5b, 
    0x56, 
    0x80, 
    0xb0, 
    0x81, 
    0x56, 
    0x42, 0x02, 0x80, 
    0x52, 
    0x63, 
    0x42, 0xeb, 0x7d, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_clip_line[3] = {
    MP_ROM_QSTR(MP_QSTR_c),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_clip_line = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_clip_line,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_clip_line,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 599,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_clip_line,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_clip_line + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_clip_line + 64,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_power
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_power[27] = {
    0x22, 0x10,
    MP_QSTR_set_power & 0xff, MP_QSTR_set_power >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xce, 0x28, 0x00,
    0xb0, 
    0x14, MP_QSTR_pwr & 0xff, MP_QSTR_pwr >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x8f, 
    0x34, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_power[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_on),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_power = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_power,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_power,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_power,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_power + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_power + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_orient
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_orient[86] = {
    0x3a, 0x18,
    MP_QSTR_set_orient & 0xff, MP_QSTR_set_orient >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xd2, 0x50, 0x27, 0x29, 0x2e, 0x2c, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x94, 
    0xb1, 
    0x83, 
    0xef, 
    0x84, 
    0xf2, 
    0x36, 0x03, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_iflush & 0xff, MP_QSTR_iflush >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x02, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__waitfor & 0xff, MP_QSTR__waitfor >> 8, 
    0x84, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x85, 
    0x55, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x85, 
    0x55, 
    0x81, 
    0x55, 
    0xb0, 
    0x18, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x85, 
    0x55, 
    0x82, 
    0x55, 
    0xb0, 
    0x18, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_set_orient_0 = {{&mp_type_bytes}, 50896, 3, (const byte*)"\x02\x67\x30"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_orient[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_orient),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_set_orient_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_orient = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_orient,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_orient,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 86,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_orient,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_orient + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_orient + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_brightness
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_brightness[23] = {
    0x32, 0x0e,
    MP_QSTR_set_brightness & 0xff, MP_QSTR_set_brightness >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xdb, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x96, 
    0xb1, 
    0x36, 0x03, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_brightness[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_value),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_brightness = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_brightness,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_brightness,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_brightness,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_brightness + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_brightness + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr[47] = {
    0x42, 0x12,
    MP_QSTR_set_i2c_addr & 0xff, MP_QSTR_set_i2c_addr >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xdf, 0x26, 0x28, 0x00,
    0xb1, 
    0x83, 
    0xef, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_ValueError & 0xff, MP_QSTR_ValueError >> 8, 
    0x23, 0x02, 
    0x34, 0x01, 
    0x65, 
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBW & 0xff, MP_QSTR__lt_BBW >> 8, 
    0x8e, 
    0x22, 0x82, 0x8c, 0xe4, 0x49, 
    0xb1, 
    0x98, 
    0xf0, 
    0xed, 
    0x36, 0x03, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr_0 = {{&mp_type_str}, 21473, 34, (const byte*)"\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6d\x6f\x64\x20\x34\x20\x61\x6c\x69\x67\x6e\x65\x64\x20\x61\x64\x64\x72\x65\x73\x73"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_addr),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 47,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_i2c_addr,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate[59] = {
    0x3e, 0x14,
    MP_QSTR_set_uart_baudrate & 0xff, MP_QSTR_set_uart_baudrate >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xe4, 0x23, 0x52, 0x2c, 0x00,
    0x48, 0x09, 0x00, 
    0x12, MP_QSTR__uart_baud_table & 0xff, MP_QSTR__uart_baud_table >> 8, 
    0xb1, 
    0x55, 
    0xc1, 
    0x4a, 0x15, 0x00, 
    0x57, 
    0x12, MP_QSTR_KeyError & 0xff, MP_QSTR_KeyError >> 8, 
    0xdf, 
    0x44, 0x0c, 0x80, 
    0x59, 
    0x12, MP_QSTR_ValueError & 0xff, MP_QSTR_ValueError >> 8, 
    0x23, 0x02, 
    0x34, 0x01, 
    0x65, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x98, 
    0xb1, 
    0x36, 0x03, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate_0 = {{&mp_type_str}, 2756, 16, (const byte*)"\x69\x6e\x76\x61\x6c\x69\x64\x20\x62\x61\x75\x64\x72\x61\x74\x65"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_baudrate),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 59,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_uart_baudrate,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_startup_deco
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco[23] = {
    0x32, 0x0e,
    MP_QSTR_set_startup_deco & 0xff, MP_QSTR_set_startup_deco >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xeb, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x99, 
    0xb1, 
    0x36, 0x03, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_value),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_startup_deco,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_save_to_flash
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_save_to_flash[20] = {
    0x19, 0x0e,
    MP_QSTR_save_to_flash & 0xff, MP_QSTR_save_to_flash >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xee, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x01, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_save_to_flash_0 = {{&mp_type_bytes}, 51055, 3, (const byte*)"\x02\x66\x6e"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_save_to_flash[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_save_to_flash_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_save_to_flash = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_save_to_flash,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_save_to_flash,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_save_to_flash,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_save_to_flash + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_save_to_flash + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_pixel
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pixel[28] = {
    0xd0, 0x04, 0x0e,
    MP_QSTR_set_pixel & 0xff, MP_QSTR_set_pixel >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xf3, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBH & 0xff, MP_QSTR__lt_BBBBH >> 8, 
    0x22, 0x80, 0x41, 
    0xb1, 
    0xb2, 
    0xb3, 
    0x36, 0x05, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_pixel[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_c),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_pixel = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pixel,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_pixel,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 28,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_pixel,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pixel + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pixel + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_get_pixel
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_get_pixel[138] = {
    0x4b, 0x20,
    MP_QSTR_get_pixel & 0xff, MP_QSTR_get_pixel >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x80, 0xf6, 0x2f, 0x24, 0x23, 0x32, 0x2b, 0x34, 0x34, 0x24, 0x2b, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBBB & 0xff, MP_QSTR__lt_BBBB >> 8, 
    0x22, 0x80, 0x61, 
    0xb1, 
    0xb2, 
    0x36, 0x04, 
    0x59, 
    0x22, 0x87, 0x68, 
    0xc3, 
    0x42, 0x50, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x80, 
    0x55, 
    0x82, 
    0xdb, 
    0x44, 0x28, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x83, 
    0x55, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x83, 
    0x55, 
    0x81, 
    0x55, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x83, 
    0x55, 
    0x82, 
    0x55, 
    0x88, 
    0xf0, 
    0xed, 
    0x63, 
    0xb3, 
    0x81, 
    0xe6, 
    0xc3, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x81, 
    0x34, 0x01, 
    0x59, 
    0xb3, 
    0x43, 0xac, 0x7f, 
    0x12, MP_QSTR_OSError & 0xff, MP_QSTR_OSError >> 8, 
    0x12, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x13, MP_QSTR_ETIMEDOUT & 0xff, MP_QSTR_ETIMEDOUT >> 8, 
    0x34, 0x01, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_get_pixel[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_get_pixel = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_pixel,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_get_pixel,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 138,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_get_pixel,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_pixel + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_pixel + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_get_line
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_get_line[130] = {
    0xe0, 0x04, 0x24,
    MP_QSTR_get_line & 0xff, MP_QSTR_get_line >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x02, 0x29, 0x2e, 0x24, 0x24, 0x23, 0x32, 0x2b, 0x2f, 0x22, 0x24, 0x2b, 0x00,
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb3, 
    0x34, 0x01, 
    0x82, 
    0xf6, 
    0xc4, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBB & 0xff, MP_QSTR__lt_BBBBB >> 8, 
    0x90, 
    0xb4, 
    0xb1, 
    0xb2, 
    0x36, 0x05, 
    0x59, 
    0xb4, 
    0x82, 
    0xe7, 
    0xc4, 
    0x22, 0x87, 0x68, 
    0xc5, 
    0x42, 0x39, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf1 & 0xff, MP_QSTR_buf1 >> 8, 
    0x80, 
    0x55, 
    0xb4, 
    0xdb, 
    0x44, 0x11, 0x80, 
    0xb0, 
    0x13, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x14, MP_QSTR_readfrom_into & 0xff, MP_QSTR_readfrom_into >> 8, 
    0xb0, 
    0x13, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0xb3, 
    0x36, 0x02, 
    0x59, 
    0x51, 
    0x63, 
    0xb5, 
    0x81, 
    0xe6, 
    0xc5, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x81, 
    0x34, 0x01, 
    0x59, 
    0xb5, 
    0x43, 0xc3, 0x7f, 
    0x12, MP_QSTR_OSError & 0xff, MP_QSTR_OSError >> 8, 
    0x12, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x13, MP_QSTR_ETIMEDOUT & 0xff, MP_QSTR_ETIMEDOUT >> 8, 
    0x34, 0x01, 
    0x65, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_get_line[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_get_line = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_line,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_get_line,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 130,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_get_line,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_line + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_line + 21,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_screen_dump
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_dump[259] = {
    0x92, 0x94, 0x80, 0x01, 0x32,
    MP_QSTR_screen_dump & 0xff, MP_QSTR_screen_dump >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x10, 0x26, 0x27, 0x26, 0x27, 0x28, 0x2b, 0x65, 0x26, 0x2b, 0x32, 0x36, 0x26, 0x2c, 0x3a, 0x2b, 0x24, 0x2e, 0x3a, 0x00,
    0xb4, 
    0x51, 
    0xde, 
    0x44, 0x07, 0x80, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb2, 
    0xf3, 
    0xc4, 
    0xb5, 
    0x51, 
    0xde, 
    0x44, 0x07, 0x80, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0xb3, 
    0xf3, 
    0xc5, 
    0xb4, 
    0x22, 0x80, 0x7f, 
    0xda, 
    0x44, 0x10, 0x80, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x82, 
    0xb4, 
    0xf4, 
    0x81, 
    0xf2, 
    0x34, 0x01, 
    0xc6, 
    0x51, 
    0xc7, 
    0x42, 0x23, 0x80, 
    0xb4, 
    0x81, 
    0xf2, 
    0x82, 
    0xf6, 
    0xc8, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x82, 
    0xb8, 
    0xf4, 
    0x81, 
    0xf2, 
    0x34, 0x01, 
    0xc6, 
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb6, 
    0x34, 0x01, 
    0x51, 
    0x82, 
    0xb4, 
    0xb8, 
    0xf3, 
    0xf4, 
    0x81, 
    0xf2, 
    0x2e, 0x02, 
    0x55, 
    0xc7, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x82, 
    0xb4, 
    0xf4, 
    0xf6, 
    0xb5, 
    0x34, 0x02, 
    0x80, 
    0x42, 0x72, 0x80, 
    0x57, 
    0xc9, 
    0xb9, 
    0xb4, 
    0xf4, 
    0x82, 
    0xf4, 
    0xca, 
    0xb0, 
    0x14, MP_QSTR_get_line & 0xff, MP_QSTR_get_line >> 8, 
    0xb2, 
    0xb3, 
    0xb9, 
    0xf2, 
    0xb6, 
    0x36, 0x03, 
    0x59, 
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb6, 
    0x34, 0x01, 
    0x81, 
    0x51, 
    0x2e, 0x02, 
    0x55, 
    0xb1, 
    0xba, 
    0xba, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb6, 
    0x34, 0x01, 
    0xf2, 
    0x81, 
    0xf3, 
    0x2e, 0x02, 
    0x56, 
    0xba, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb6, 
    0x34, 0x01, 
    0x81, 
    0xf3, 
    0xe5, 
    0xca, 
    0xb7, 
    0x44, 0x33, 0x80, 
    0xb0, 
    0x14, MP_QSTR_get_line & 0xff, MP_QSTR_get_line >> 8, 
    0xb2, 
    0xb8, 
    0xf2, 
    0xb3, 
    0xb9, 
    0xf2, 
    0xb7, 
    0x36, 0x03, 
    0x59, 
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb7, 
    0x34, 0x01, 
    0x81, 
    0x51, 
    0x2e, 0x02, 
    0x55, 
    0xb1, 
    0xba, 
    0xba, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb7, 
    0x34, 0x01, 
    0xf2, 
    0x81, 
    0xf3, 
    0x2e, 0x02, 
    0x56, 
    0xba, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb7, 
    0x34, 0x01, 
    0x81, 
    0xf3, 
    0xe5, 
    0xca, 
    0x81, 
    0xe5, 
    0x58, 
    0x5a, 
    0xd7, 
    0x43, 0x88, 0x7f, 
    0x59, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_screen_dump[6] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_screen_dump = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 6,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_dump,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_screen_dump,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 259,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 19,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 6,
        .n_kwonly_args = 0,
        .n_def_pos_args = 4,
        .qstr_block_name = MP_QSTR_screen_dump,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_dump + 9,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_dump + 30,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_screen_load
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_load[168] = {
    0x62, 0x24,
    MP_QSTR_screen_load & 0xff, MP_QSTR_screen_load >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x27, 0x2e, 0x37, 0x22, 0x27, 0x23, 0x2f, 0x31, 0x49, 0x2d, 0x23, 0x29, 0x00,
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0xf4, 
    0x82, 
    0xf4, 
    0x82, 
    0xf2, 
    0xc2, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBHBBB & 0xff, MP_QSTR__lt_BBHBBB >> 8, 
    0x22, 0x80, 0x70, 
    0xb2, 
    0x90, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x36, 0x06, 
    0x59, 
    0x80, 
    0xc3, 
    0x12, MP_QSTR_memoryview & 0xff, MP_QSTR_memoryview >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xc4, 
    0x42, 0x56, 0x80, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xb3, 
    0xf3, 
    0x22, 0x84, 0x00, 
    0xdb, 
    0x44, 0x1a, 0x80, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb4, 
    0xb3, 
    0xb3, 
    0x22, 0x84, 0x00, 
    0xf2, 
    0x2e, 0x02, 
    0x55, 
    0x36, 0x01, 
    0x59, 
    0xb3, 
    0x22, 0x84, 0x00, 
    0xe5, 
    0xc3, 
    0x42, 0x2d, 0x80, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb4, 
    0xb3, 
    0x51, 
    0x2e, 0x02, 
    0x55, 
    0x36, 0x01, 
    0x59, 
    0x42, 0x0d, 0x80, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x02, 
    0x36, 0x01, 
    0x59, 
    0xb3, 
    0x81, 
    0xe5, 
    0xc3, 
    0xb3, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0xf4, 
    0x82, 
    0xf4, 
    0xd7, 
    0x43, 0xe3, 0x7f, 
    0xb3, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xd7, 
    0x43, 0x9f, 0x7f, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_screen_load_0 = {{&mp_type_bytes}, 46501, 1, (const byte*)"\x00"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_screen_load[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_screen_load_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_screen_load = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_load,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_screen_load,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 168,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_screen_load,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_load + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_screen_load + 20,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_pos
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pos[26] = {
    0x43, 0x0e,
    MP_QSTR_set_pos & 0xff, MP_QSTR_set_pos >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x38, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBBB & 0xff, MP_QSTR__lt_BBBB >> 8, 
    0x22, 0x80, 0x58, 
    0xb1, 
    0xb2, 
    0x36, 0x04, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_pos[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_pos = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pos,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_pos,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_pos,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pos + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pos + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_text_color
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_text_color[26] = {
    0x43, 0x0e,
    MP_QSTR_set_text_color & 0xff, MP_QSTR_set_text_color >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x3b, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBHH & 0xff, MP_QSTR__lt_BBHH >> 8, 
    0x22, 0x80, 0x63, 
    0xb1, 
    0xb2, 
    0x36, 0x04, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_text_color[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_fg),
    MP_ROM_QSTR(MP_QSTR_bg),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_text_color = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_text_color,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_text_color,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_text_color,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_text_color + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_text_color + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_font
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_font[51] = {
    0xe2, 0x84, 0x80, 0x01, 0x12,
    MP_QSTR_set_font & 0xff, MP_QSTR_set_font >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x3e, 0x6a, 0x31, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBBB & 0xff, MP_QSTR__lt_BBBB >> 8, 
    0x22, 0x80, 0x46, 
    0xb5, 
    0x87, 
    0xf0, 
    0xb4, 
    0x86, 
    0xf0, 
    0xed, 
    0xb1, 
    0x83, 
    0xef, 
    0x84, 
    0xf0, 
    0xed, 
    0xb3, 
    0x8f, 
    0xef, 
    0xed, 
    0xb2, 
    0x22, 0x81, 0x7f, 
    0xef, 
    0x36, 0x04, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_font[6] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_font),
    MP_ROM_QSTR(MP_QSTR_scale),
    MP_ROM_QSTR(MP_QSTR_bold),
    MP_ROM_QSTR(MP_QSTR_trans),
    MP_ROM_QSTR(MP_QSTR_scroll),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_font = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 6,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_font,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_font,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 51,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 6,
        .n_kwonly_args = 0,
        .n_def_pos_args = 4,
        .qstr_block_name = MP_QSTR_set_font,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_font + 9,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_font + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_write
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_write[19] = {
    0x22, 0x0e,
    MP_QSTR_write & 0xff, MP_QSTR_write >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x47, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_write[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_write,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_write,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_write,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_write + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_write + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_pen
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pen[26] = {
    0x43, 0x0e,
    MP_QSTR_set_pen & 0xff, MP_QSTR_set_pen >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x4c, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBHH & 0xff, MP_QSTR__lt_BBHH >> 8, 
    0x22, 0x80, 0x50, 
    0xb1, 
    0xb2, 
    0x36, 0x04, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_pen[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_line),
    MP_ROM_QSTR(MP_QSTR_fill),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_pen = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pen,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_pen,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_pen,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pen + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_pen + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_erase
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_erase[20] = {
    0x19, 0x0e,
    MP_QSTR_erase & 0xff, MP_QSTR_erase >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x4f, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x01, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_erase_0 = {{&mp_type_bytes}, 27330, 2, (const byte*)"\x02\x45"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_erase[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_erase_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_erase = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_erase,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_erase,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_erase,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_erase + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_erase + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_dot
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_dot[70] = {
    0x43, 0x12,
    MP_QSTR_dot & 0xff, MP_QSTR_dot >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x52, 0x1f, 0x2b, 0x00,
    0x80, 
    0xb1, 
    0x57, 
    0x5b, 
    0xda, 
    0x46, 0x08, 0x80, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xd7, 
    0x42, 0x02, 0x80, 
    0x5a, 
    0x59, 
    0x44, 0x24, 0x80, 
    0x80, 
    0xb2, 
    0x57, 
    0x5b, 
    0xda, 
    0x46, 0x08, 0x80, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0xd7, 
    0x42, 0x02, 0x80, 
    0x5a, 
    0x59, 
    0x44, 0x0f, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBBB & 0xff, MP_QSTR__lt_BBBB >> 8, 
    0x22, 0x80, 0x4b, 
    0xb1, 
    0xb2, 
    0x36, 0x04, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_dot[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_dot = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_dot,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_dot,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 70,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_dot,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_dot + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_dot + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_rect
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_rect[350] = {
    0x8a, 0x15, 0x40,
    MP_QSTR_rect & 0xff, MP_QSTR_rect >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x56, 0x1f, 0x23, 0x22, 0x2c, 0x24, 0x26, 0x22, 0x24, 0x22, 0x26, 0x22, 0x24, 0x22, 0x50, 0x1f, 0x22, 0x50, 0x24, 0x39, 0x24, 0x39, 0x2b, 0x3b, 0x2b, 0x5e, 0x00,
    0xb1, 
    0xb3, 
    0xf2, 
    0x80, 
    0xda, 
    0x43, 0x1a, 0x80, 
    0xb2, 
    0xb4, 
    0xf2, 
    0x80, 
    0xda, 
    0x43, 0x12, 0x80, 
    0xb1, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xdb, 
    0x43, 0x09, 0x80, 
    0xb2, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0xdb, 
    0x44, 0x02, 0x80, 
    0x51, 
    0x63, 
    0xb1, 
    0x80, 
    0xd7, 
    0x43, 0x06, 0x80, 
    0xb2, 
    0x80, 
    0xd7, 
    0x44, 0xea, 0x80, 
    0x52, 
    0x57, 
    0xc6, 
    0xc7, 
    0xb1, 
    0x80, 
    0xd7, 
    0x44, 0x08, 0x80, 
    0x50, 
    0xc6, 
    0xb3, 
    0xb1, 
    0xe5, 
    0xc3, 
    0x80, 
    0xc1, 
    0xb2, 
    0x80, 
    0xd7, 
    0x44, 0x08, 0x80, 
    0x50, 
    0xc7, 
    0xb4, 
    0xb2, 
    0xe5, 
    0xc4, 
    0x80, 
    0xc2, 
    0xb5, 
    0x22, 0x80, 0x51, 
    0xd9, 
    0x43, 0x08, 0x80, 
    0xb5, 
    0x22, 0x80, 0x72, 
    0xd9, 
    0x44, 0x21, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x51, 
    0xb1, 
    0xb2, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb3, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb4, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x36, 0x06, 
    0x59, 
    0xb5, 
    0x22, 0x80, 0x57, 
    0xd9, 
    0x43, 0x08, 0x80, 
    0xb5, 
    0x22, 0x80, 0x72, 
    0xd9, 
    0x44, 0x86, 0x80, 
    0xb6, 
    0x44, 0x19, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x57, 
    0xb1, 
    0xb2, 
    0x81, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb4, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x36, 0x06, 
    0x59, 
    0xb7, 
    0x44, 0x19, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x57, 
    0xb1, 
    0xb2, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb3, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x81, 
    0x36, 0x06, 
    0x59, 
    0xb1, 
    0xb3, 
    0xf2, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xd7, 
    0x44, 0x1b, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x57, 
    0xb1, 
    0xb3, 
    0xf2, 
    0xb2, 
    0x81, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb4, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x36, 0x06, 
    0x59, 
    0xb2, 
    0xb4, 
    0xf2, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0xd7, 
    0x44, 0x1b, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x57, 
    0xb1, 
    0xb2, 
    0xb4, 
    0xf2, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb3, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x81, 
    0x36, 0x06, 
    0x59, 
    0x42, 0x1f, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0xb5, 
    0xb1, 
    0xb2, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb3, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x12, MP_QSTR_min & 0xff, MP_QSTR_min >> 8, 
    0xb4, 
    0x22, 0x81, 0x7f, 
    0x34, 0x02, 
    0x36, 0x06, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect[6] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
    MP_ROM_QSTR(MP_QSTR_cmd),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_rect = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 6,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 350,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 18,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 6,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_rect,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect + 35,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_rect_outline
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline[26] = {
    0xd9, 0x04, 0x0e,
    MP_QSTR_rect_outline & 0xff, MP_QSTR_rect_outline >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x73, 0x00,
    0xb0, 
    0x14, MP_QSTR_rect & 0xff, MP_QSTR_rect >> 8, 
    0xb1, 
    0xb2, 
    0xb3, 
    0xb4, 
    0x22, 0x80, 0x57, 
    0x36, 0x05, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_outline = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_rect_outline,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_rect_interior
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior[26] = {
    0xd9, 0x04, 0x0e,
    MP_QSTR_rect_interior & 0xff, MP_QSTR_rect_interior >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x76, 0x00,
    0xb0, 
    0x14, MP_QSTR_rect & 0xff, MP_QSTR_rect >> 8, 
    0xb1, 
    0xb2, 
    0xb3, 
    0xb4, 
    0x22, 0x80, 0x51, 
    0x36, 0x05, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_interior = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_rect_interior,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_line
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_line[82] = {
    0xf1, 0x04, 0x1a,
    MP_QSTR_line & 0xff, MP_QSTR_line >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x79, 0x25, 0x24, 0x24, 0x24, 0x24, 0x32, 0x00,
    0xb0, 
    0x13, MP_QSTR_array4 & 0xff, MP_QSTR_array4 >> 8, 
    0xc5, 
    0xb1, 
    0xb5, 
    0x80, 
    0x56, 
    0xb2, 
    0xb5, 
    0x81, 
    0x56, 
    0xb3, 
    0xb5, 
    0x82, 
    0x56, 
    0xb4, 
    0xb5, 
    0x83, 
    0x56, 
    0xb0, 
    0x14, MP_QSTR_clip_line & 0xff, MP_QSTR_clip_line >> 8, 
    0xb5, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x36, 0x03, 
    0x44, 0x19, 0x80, 
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x4c, 
    0xb5, 
    0x80, 
    0x55, 
    0xb5, 
    0x81, 
    0x55, 
    0xb5, 
    0x82, 
    0x55, 
    0xb5, 
    0x83, 
    0x55, 
    0x36, 0x06, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_line[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x1),
    MP_ROM_QSTR(MP_QSTR_y1),
    MP_ROM_QSTR(MP_QSTR_x2),
    MP_ROM_QSTR(MP_QSTR_y2),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_line = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_line,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_line,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 82,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_line,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_line + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_line + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_dot_no_clip
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip[26] = {
    0x43, 0x0e,
    MP_QSTR_dot_no_clip & 0xff, MP_QSTR_dot_no_clip >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x82, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBBB & 0xff, MP_QSTR__lt_BBBB >> 8, 
    0x22, 0x80, 0x4b, 
    0xb1, 
    0xb2, 
    0x36, 0x04, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_dot_no_clip,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_rect_no_clip
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip[29] = {
    0xe1, 0x04, 0x0e,
    MP_QSTR_rect_no_clip & 0xff, MP_QSTR_rect_no_clip >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x85, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x72, 
    0xb1, 
    0xb2, 
    0xb3, 
    0xb4, 
    0x36, 0x06, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 29,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_rect_no_clip,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip[29] = {
    0xe1, 0x04, 0x0e,
    MP_QSTR_rect_outline_no_clip & 0xff, MP_QSTR_rect_outline_no_clip >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x88, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x57, 
    0xb1, 
    0xb2, 
    0xb3, 
    0xb4, 
    0x36, 0x06, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 29,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_rect_outline_no_clip,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip[29] = {
    0xe1, 0x04, 0x0e,
    MP_QSTR_rect_interior_no_clip & 0xff, MP_QSTR_rect_interior_no_clip >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x8b, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x51, 
    0xb1, 
    0xb2, 
    0xb3, 
    0xb4, 
    0x36, 0x06, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 29,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_rect_interior_no_clip,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_line_no_clip
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_line_no_clip[29] = {
    0xe1, 0x04, 0x0e,
    MP_QSTR_line_no_clip & 0xff, MP_QSTR_line_no_clip >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x8e, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBBB & 0xff, MP_QSTR__lt_BBBBBB >> 8, 
    0x22, 0x80, 0x4c, 
    0xb1, 
    0xb2, 
    0xb3, 
    0xb4, 
    0x36, 0x06, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_line_no_clip[5] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x1),
    MP_ROM_QSTR(MP_QSTR_y1),
    MP_ROM_QSTR(MP_QSTR_x2),
    MP_ROM_QSTR(MP_QSTR_y2),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_line_no_clip = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_line_no_clip,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_line_no_clip,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 29,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_line_no_clip,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_line_no_clip + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_line_no_clip + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_poly_dot
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_dot[62] = {
    0x3a, 0x14,
    MP_QSTR_poly_dot & 0xff, MP_QSTR_poly_dot >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x91, 0x2b, 0x28, 0x35, 0x00,
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x81, 
    0xef, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_ValueError & 0xff, MP_QSTR_ValueError >> 8, 
    0x23, 0x02, 
    0x34, 0x01, 
    0x65, 
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x22, 0x80, 0x71, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x82, 
    0xf6, 
    0x36, 0x03, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_poly_dot_0 = {{&mp_type_str}, 57570, 33, (const byte*)"\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x65\x76\x65\x6e\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x62\x79\x74\x65\x73"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_poly_dot[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_data),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_poly_dot_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_poly_dot = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_dot,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_poly_dot,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 62,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_poly_dot,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_dot + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_dot + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_poly_line
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_line[62] = {
    0x3a, 0x14,
    MP_QSTR_poly_line & 0xff, MP_QSTR_poly_line >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x97, 0x2b, 0x28, 0x35, 0x00,
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x81, 
    0xef, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_ValueError & 0xff, MP_QSTR_ValueError >> 8, 
    0x23, 0x02, 
    0x34, 0x01, 
    0x65, 
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x22, 0x80, 0x78, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x82, 
    0xf6, 
    0x36, 0x03, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_poly_line_0 = {{&mp_type_str}, 57570, 33, (const byte*)"\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x65\x76\x65\x6e\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x62\x79\x74\x65\x73"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_poly_line[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_data),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_poly_line_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_poly_line = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_line,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_poly_line,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 62,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_poly_line,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_line + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_poly_line + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_touch_config
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_touch_config[46] = {
    0xd0, 0x85, 0x01, 0x0e,
    MP_QSTR_touch_config & 0xff, MP_QSTR_touch_config >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0x9f, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBBB & 0xff, MP_QSTR__lt_BBBB >> 8, 
    0x22, 0x80, 0x7a, 
    0xb3, 
    0x51, 
    0xde, 
    0xd3, 
    0x82, 
    0xf0, 
    0xb2, 
    0x81, 
    0xf0, 
    0xed, 
    0xb1, 
    0xed, 
    0x12, MP_QSTR_bool & 0xff, MP_QSTR_bool >> 8, 
    0xb3, 
    0x34, 0x01, 
    0x87, 
    0xf0, 
    0x36, 0x04, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_touch_config[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_calib),
    MP_ROM_QSTR(MP_QSTR_save),
    MP_ROM_QSTR(MP_QSTR_irq),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_touch_config = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_touch_config,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_touch_config,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 46,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 3,
        .qstr_block_name = MP_QSTR_touch_config,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_touch_config + 8,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_touch_config + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_is_touched
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_is_touched[45] = {
    0x29, 0x14,
    MP_QSTR_is_touched & 0xff, MP_QSTR_is_touched >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xa2, 0x29, 0x27, 0x29, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x01, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x84, 
    0x55, 
    0xc1, 
    0xb0, 
    0x14, MP_QSTR__waitfor & 0xff, MP_QSTR__waitfor >> 8, 
    0x83, 
    0xb1, 
    0x36, 0x02, 
    0x59, 
    0xb1, 
    0x81, 
    0x55, 
    0x87, 
    0xf1, 
    0x80, 
    0xdc, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_is_touched_0 = {{&mp_type_bytes}, 27347, 2, (const byte*)"\x02\x54"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_is_touched[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_is_touched_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_is_touched = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_is_touched,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_is_touched,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 45,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_is_touched,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_is_touched + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_is_touched + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_get_touch
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_get_touch[51] = {
    0x29, 0x14,
    MP_QSTR_get_touch & 0xff, MP_QSTR_get_touch >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xa8, 0x29, 0x27, 0x29, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x01, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_buf & 0xff, MP_QSTR_buf >> 8, 
    0x84, 
    0x55, 
    0xc1, 
    0xb0, 
    0x14, MP_QSTR__waitfor & 0xff, MP_QSTR__waitfor >> 8, 
    0x83, 
    0xb1, 
    0x36, 0x02, 
    0x59, 
    0xb1, 
    0x81, 
    0x55, 
    0x87, 
    0xf1, 
    0xb1, 
    0x82, 
    0x55, 
    0xb1, 
    0x83, 
    0x55, 
    0x2a, 0x03, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_get_touch_0 = {{&mp_type_bytes}, 27347, 2, (const byte*)"\x02\x54"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_get_touch[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_get_touch_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_get_touch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_touch,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_get_touch,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 51,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_get_touch,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_touch + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_get_touch + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_spi_win
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_spi_win[63] = {
    0x99, 0x14, 0x14,
    MP_QSTR_set_spi_win & 0xff, MP_QSTR_set_spi_win >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xb0, 0x23, 0x1f, 0x43, 0x00,
    0x12, MP_QSTR_pack_into & 0xff, MP_QSTR_pack_into >> 8, 
    0x23, 0x05, 
    0xb0, 
    0x13, MP_QSTR_buf19 & 0xff, MP_QSTR_buf19 >> 8, 
    0x80, 
    0x82, 
    0x22, 0x80, 0x55, 
    0x8a, 
    0xb1, 
    0xb2, 
    0xb1, 
    0xb3, 
    0xf2, 
    0x81, 
    0xf3, 
    0xb2, 
    0xb4, 
    0xf2, 
    0x81, 
    0xf3, 
    0x80, 
    0x80, 
    0x80, 
    0x22, 0x83, 0xff, 0x7f, 
    0x34, 0x0e, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf19 & 0xff, MP_QSTR_buf19 >> 8, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_set_spi_win_0 = {{&mp_type_str}, 4731, 12, (const byte*)"\x3c\x42\x42\x42\x48\x48\x48\x48\x48\x48\x48\x48"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_spi_win[6] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_set_spi_win_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_spi_win = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_spi_win,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_spi_win,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 63,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 20,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_spi_win,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_spi_win + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_spi_win + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_fast_spi
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_fast_spi[38] = {
    0xa2, 0x01, 0x14,
    MP_QSTR_fast_spi & 0xff, MP_QSTR_fast_spi >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xb6, 0x29, 0x24, 0x27, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x02, 
    0x36, 0x01, 
    0x59, 
    0xb1, 
    0x44, 0x07, 0x80, 
    0xb0, 
    0x14, MP_QSTR_oflush & 0xff, MP_QSTR_oflush >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_spi & 0xff, MP_QSTR_spi >> 8, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_fast_spi_0 = {{&mp_type_bytes}, 27285, 2, (const byte*)"\x02\x12"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_fast_spi[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_flush),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_fast_spi_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_fast_spi = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_fast_spi,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_fast_spi,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 38,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_fast_spi,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_fast_spi + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_fast_spi + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_show_framebuf
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_show_framebuf[24] = {
    0x22, 0x0e,
    MP_QSTR_show_framebuf & 0xff, MP_QSTR_show_framebuf >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xbc, 0x00,
    0xb0, 
    0x14, MP_QSTR_fast_spi & 0xff, MP_QSTR_fast_spi >> 8, 
    0x36, 0x00, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_show_framebuf[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_show_framebuf = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_show_framebuf,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_show_framebuf,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 24,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_show_framebuf,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_show_framebuf + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_show_framebuf + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_scroll
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll[23] = {
    0x32, 0x0e,
    MP_QSTR_set_scroll & 0xff, MP_QSTR_set_scroll >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xbf, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x95, 
    0xb1, 
    0x36, 0x03, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_on),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_scroll,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_scroll_win
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win[53] = {
    0xc2, 0x90, 0x84, 0x80, 0x01, 0x10,
    MP_QSTR_set_scroll_win & 0xff, MP_QSTR_set_scroll_win >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xc2, 0x3a, 0x00,
    0x12, MP_QSTR_pack_into & 0xff, MP_QSTR_pack_into >> 8, 
    0x23, 0x0a, 
    0xb0, 
    0x13, MP_QSTR_buf19 & 0xff, MP_QSTR_buf19 >> 8, 
    0x80, 
    0x82, 
    0x22, 0x80, 0x55, 
    0xb1, 
    0xb2, 
    0xb3, 
    0xb4, 
    0xb5, 
    0xb6, 
    0xb7, 
    0xb8, 
    0xb9, 
    0x34, 0x0e, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb0, 
    0x13, MP_QSTR_buf19 & 0xff, MP_QSTR_buf19 >> 8, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_0 = {{&mp_type_str}, 4731, 12, (const byte*)"\x3c\x42\x42\x42\x48\x48\x48\x48\x48\x48\x48\x48"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win[11] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_win),
    MP_ROM_QSTR(MP_QSTR_x),
    MP_ROM_QSTR(MP_QSTR_y),
    MP_ROM_QSTR(MP_QSTR_w),
    MP_ROM_QSTR(MP_QSTR_h),
    MP_ROM_QSTR(MP_QSTR_vec),
    MP_ROM_QSTR(MP_QSTR_pat),
    MP_ROM_QSTR(MP_QSTR_fill),
    MP_ROM_QSTR(MP_QSTR_color),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 10,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 53,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 25,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 10,
        .n_kwonly_args = 0,
        .n_def_pos_args = 8,
        .qstr_block_name = MP_QSTR_set_scroll_win,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win + 10,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param[28] = {
    0xd0, 0x04, 0x0e,
    MP_QSTR_set_scroll_win_param & 0xff, MP_QSTR_set_scroll_win_param >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xc6, 0x00,
    0xb0, 
    0x14, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x10, MP_QSTR__lt_BBBBH & 0xff, MP_QSTR__lt_BBBBH >> 8, 
    0x22, 0x80, 0x75, 
    0xb1, 
    0xb2, 
    0xb3, 
    0x36, 0x05, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param[4] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_win),
    MP_ROM_QSTR(MP_QSTR_param),
    MP_ROM_QSTR(MP_QSTR_value),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 28,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_scroll_win_param,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf[56] = {
    0x3a, 0x16,
    MP_QSTR_set_scroll_buf & 0xff, MP_QSTR_set_scroll_buf >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xc9, 0x27, 0x26, 0x28, 0x2c, 0x00,
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0xc2, 
    0xb2, 
    0xa0, 
    0xd8, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_ValueError & 0xff, MP_QSTR_ValueError >> 8, 
    0x23, 0x02, 
    0x34, 0x01, 
    0x65, 
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBB & 0xff, MP_QSTR__lt_BBB >> 8, 
    0x91, 
    0xb2, 
    0x36, 0x03, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf_0 = {{&mp_type_str}, 32372, 25, (const byte*)"\x6c\x65\x6e\x67\x74\x68\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x33\x32\x20\x6f\x72\x20\x6c\x65\x73\x73"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_s),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 56,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_set_scroll_buf,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_jpeg_start
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_start[52] = {
    0x32, 0x14,
    MP_QSTR_jpeg_start & 0xff, MP_QSTR_jpeg_start >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xd0, 0x29, 0x28, 0x27, 0x00,
    0xb1, 
    0x22, 0x83, 0xff, 0x7f, 
    0xd8, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_ValueError & 0xff, MP_QSTR_ValueError >> 8, 
    0x23, 0x02, 
    0x34, 0x01, 
    0x65, 
    0xb0, 
    0x14, MP_QSTR_oflush & 0xff, MP_QSTR_oflush >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x10, MP_QSTR__lt_BBH & 0xff, MP_QSTR__lt_BBH >> 8, 
    0x22, 0x80, 0x6a, 
    0xb1, 
    0x36, 0x03, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_jpeg_start_0 = {{&mp_type_str}, 9605, 28, (const byte*)"\x6c\x65\x6e\x67\x74\x68\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x36\x35\x35\x33\x35\x20\x6f\x72\x20\x6c\x65\x73\x73"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_start[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_l),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_jpeg_start_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_jpeg_start = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_start,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_start,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 52,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_jpeg_start,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_start + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_start + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_jpeg_data
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_data[19] = {
    0x22, 0x0e,
    MP_QSTR_jpeg_data & 0xff, MP_QSTR_jpeg_data >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xd6, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_data[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_jpeg_data = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_data,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_data,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_jpeg_data,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_data + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg_data + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_jpeg
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg[33] = {
    0x2a, 0x10,
    MP_QSTR_jpeg & 0xff, MP_QSTR_jpeg >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xd9, 0x2d, 0x00,
    0xb0, 
    0x14, MP_QSTR_jpeg_start & 0xff, MP_QSTR_jpeg_start >> 8, 
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_jpeg_data & 0xff, MP_QSTR_jpeg_data >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_jpeg[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_jpeg = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_jpeg,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 33,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_jpeg,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_jpeg + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_feed_wdt
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_feed_wdt[20] = {
    0x19, 0x0e,
    MP_QSTR_feed_wdt & 0xff, MP_QSTR_feed_wdt >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xdd, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x01, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_feed_wdt_0 = {{&mp_type_bytes}, 27280, 2, (const byte*)"\x02\x17"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_feed_wdt[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_feed_wdt_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_feed_wdt = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_feed_wdt,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_feed_wdt,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_feed_wdt,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_feed_wdt + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_feed_wdt + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR_reset
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR_reset[28] = {
    0x19, 0x10,
    MP_QSTR_reset & 0xff, MP_QSTR_reset >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x90, 0xe0, 0x29, 0x00,
    0xb0, 
    0x14, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x23, 0x01, 
    0x36, 0x01, 
    0x59, 
    0x12, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x8f, 
    0x34, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr__lt_module_gt__LCD160CR_reset_0 = {{&mp_type_bytes}, 28220, 6, (const byte*)"\x02\x59\xef\xbe\xad\xde"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR_reset[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_PTR(&const_obj_lcd160cr__lt_module_gt__LCD160CR_reset_0),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR_reset,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 28,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_reset,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR_reset + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR_reset + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr__lt_module_gt__LCD160CR
STATIC const byte fun_data_lcd160cr__lt_module_gt__LCD160CR[476] = {
    0x38, 0xbc, 0x02,
    MP_QSTR_LCD160CR & 0xff, MP_QSTR_LCD160CR >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x8c, 0x21, 0x1f, 0x81, 0x2f, 0x85, 0x0c, 0x6a, 0x40, 0x69, 0x40, 0x85, 0x0b, 0x8b, 0x0b, 0x85, 0x0c, 0x6a, 0x20, 0x8a, 0x41, 0x65, 0x20, 0x85, 0x09, 0x65, 0x65, 0x60, 0x85, 0x07, 0x65, 0x65, 0x40, 0x65, 0x85, 0x0c, 0x85, 0x0e, 0x8c, 0x17, 0x85, 0x11, 0x65, 0x65, 0x8c, 0x08, 0x65, 0x60, 0x65, 0x65, 0x65, 0x20, 0x8b, 0x1d, 0x65, 0x65, 0x85, 0x09, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x60, 0x85, 0x08, 0x6b, 0x65, 0x60, 0x85, 0x08, 0x65, 0x60, 0x69, 0x60, 0x65, 0x65, 0x72, 0x20, 0x65, 0x85, 0x07, 0x65, 0x60, 0x65, 0x65, 0x20, 0x65, 0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_LCD160CR & 0xff, MP_QSTR_LCD160CR >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x51, 
    0x2a, 0x01, 
    0x2c, 0x00, 
    0x51, 
    0x10, MP_QSTR_pwr & 0xff, MP_QSTR_pwr >> 8, 
    0x62, 
    0x51, 
    0x10, MP_QSTR_i2c & 0xff, MP_QSTR_i2c >> 8, 
    0x62, 
    0x51, 
    0x10, MP_QSTR_spi & 0xff, MP_QSTR_spi >> 8, 
    0x62, 
    0x22, 0x80, 0x62, 
    0x10, MP_QSTR_i2c_addr & 0xff, MP_QSTR_i2c_addr >> 8, 
    0x62, 
    0x33, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x32, 0x01, 
    0x16, MP_QSTR__send & 0xff, MP_QSTR__send >> 8, 
    0x80, 
    0x80, 
    0x2a, 0x02, 
    0x53, 
    0x33, 0x02, 
    0x16, MP_QSTR__fcmd2 & 0xff, MP_QSTR__fcmd2 >> 8, 
    0x80, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x03, 
    0x16, MP_QSTR__fcmd2b & 0xff, MP_QSTR__fcmd2b >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR__waitfor & 0xff, MP_QSTR__waitfor >> 8, 
    0x22, 0x81, 0x7f, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x05, 
    0x16, MP_QSTR_oflush & 0xff, MP_QSTR_oflush >> 8, 
    0x32, 0x06, 
    0x16, MP_QSTR_iflush & 0xff, MP_QSTR_iflush >> 8, 
    0x11, MP_QSTR_staticmethod & 0xff, MP_QSTR_staticmethod >> 8, 
    0x32, 0x07, 
    0x34, 0x01, 
    0x16, MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8, 
    0x11, MP_QSTR_staticmethod & 0xff, MP_QSTR_staticmethod >> 8, 
    0x32, 0x08, 
    0x34, 0x01, 
    0x16, MP_QSTR_clip_line & 0xff, MP_QSTR_clip_line >> 8, 
    0x32, 0x09, 
    0x16, MP_QSTR_set_power & 0xff, MP_QSTR_set_power >> 8, 
    0x32, 0x0a, 
    0x16, MP_QSTR_set_orient & 0xff, MP_QSTR_set_orient >> 8, 
    0x32, 0x0b, 
    0x16, MP_QSTR_set_brightness & 0xff, MP_QSTR_set_brightness >> 8, 
    0x32, 0x0c, 
    0x16, MP_QSTR_set_i2c_addr & 0xff, MP_QSTR_set_i2c_addr >> 8, 
    0x32, 0x0d, 
    0x16, MP_QSTR_set_uart_baudrate & 0xff, MP_QSTR_set_uart_baudrate >> 8, 
    0x32, 0x0e, 
    0x16, MP_QSTR_set_startup_deco & 0xff, MP_QSTR_set_startup_deco >> 8, 
    0x32, 0x0f, 
    0x16, MP_QSTR_save_to_flash & 0xff, MP_QSTR_save_to_flash >> 8, 
    0x32, 0x10, 
    0x16, MP_QSTR_set_pixel & 0xff, MP_QSTR_set_pixel >> 8, 
    0x32, 0x11, 
    0x16, MP_QSTR_get_pixel & 0xff, MP_QSTR_get_pixel >> 8, 
    0x32, 0x12, 
    0x16, MP_QSTR_get_line & 0xff, MP_QSTR_get_line >> 8, 
    0x80, 
    0x80, 
    0x51, 
    0x51, 
    0x2a, 0x04, 
    0x53, 
    0x33, 0x13, 
    0x16, MP_QSTR_screen_dump & 0xff, MP_QSTR_screen_dump >> 8, 
    0x32, 0x14, 
    0x16, MP_QSTR_screen_load & 0xff, MP_QSTR_screen_load >> 8, 
    0x32, 0x15, 
    0x16, MP_QSTR_set_pos & 0xff, MP_QSTR_set_pos >> 8, 
    0x32, 0x16, 
    0x16, MP_QSTR_set_text_color & 0xff, MP_QSTR_set_text_color >> 8, 
    0x80, 
    0x80, 
    0x80, 
    0x80, 
    0x2a, 0x04, 
    0x53, 
    0x33, 0x17, 
    0x16, MP_QSTR_set_font & 0xff, MP_QSTR_set_font >> 8, 
    0x32, 0x18, 
    0x16, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0x32, 0x19, 
    0x16, MP_QSTR_set_pen & 0xff, MP_QSTR_set_pen >> 8, 
    0x32, 0x1a, 
    0x16, MP_QSTR_erase & 0xff, MP_QSTR_erase >> 8, 
    0x32, 0x1b, 
    0x16, MP_QSTR_dot & 0xff, MP_QSTR_dot >> 8, 
    0x22, 0x80, 0x72, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x1c, 
    0x16, MP_QSTR_rect & 0xff, MP_QSTR_rect >> 8, 
    0x32, 0x1d, 
    0x16, MP_QSTR_rect_outline & 0xff, MP_QSTR_rect_outline >> 8, 
    0x32, 0x1e, 
    0x16, MP_QSTR_rect_interior & 0xff, MP_QSTR_rect_interior >> 8, 
    0x32, 0x1f, 
    0x16, MP_QSTR_line & 0xff, MP_QSTR_line >> 8, 
    0x32, 0x20, 
    0x16, MP_QSTR_dot_no_clip & 0xff, MP_QSTR_dot_no_clip >> 8, 
    0x32, 0x21, 
    0x16, MP_QSTR_rect_no_clip & 0xff, MP_QSTR_rect_no_clip >> 8, 
    0x32, 0x22, 
    0x16, MP_QSTR_rect_outline_no_clip & 0xff, MP_QSTR_rect_outline_no_clip >> 8, 
    0x32, 0x23, 
    0x16, MP_QSTR_rect_interior_no_clip & 0xff, MP_QSTR_rect_interior_no_clip >> 8, 
    0x32, 0x24, 
    0x16, MP_QSTR_line_no_clip & 0xff, MP_QSTR_line_no_clip >> 8, 
    0x32, 0x25, 
    0x16, MP_QSTR_poly_dot & 0xff, MP_QSTR_poly_dot >> 8, 
    0x32, 0x26, 
    0x16, MP_QSTR_poly_line & 0xff, MP_QSTR_poly_line >> 8, 
    0x50, 
    0x50, 
    0x51, 
    0x2a, 0x03, 
    0x53, 
    0x33, 0x27, 
    0x16, MP_QSTR_touch_config & 0xff, MP_QSTR_touch_config >> 8, 
    0x32, 0x28, 
    0x16, MP_QSTR_is_touched & 0xff, MP_QSTR_is_touched >> 8, 
    0x32, 0x29, 
    0x16, MP_QSTR_get_touch & 0xff, MP_QSTR_get_touch >> 8, 
    0x32, 0x2a, 
    0x16, MP_QSTR_set_spi_win & 0xff, MP_QSTR_set_spi_win >> 8, 
    0x52, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x2b, 
    0x16, MP_QSTR_fast_spi & 0xff, MP_QSTR_fast_spi >> 8, 
    0x32, 0x2c, 
    0x16, MP_QSTR_show_framebuf & 0xff, MP_QSTR_show_framebuf >> 8, 
    0x32, 0x2d, 
    0x16, MP_QSTR_set_scroll & 0xff, MP_QSTR_set_scroll >> 8, 
    0x7f, 
    0x80, 
    0x80, 
    0x80, 
    0x80, 
    0x80, 
    0x22, 0x8f, 0x60, 
    0x80, 
    0x2a, 0x08, 
    0x53, 
    0x33, 0x2e, 
    0x16, MP_QSTR_set_scroll_win & 0xff, MP_QSTR_set_scroll_win >> 8, 
    0x32, 0x2f, 
    0x16, MP_QSTR_set_scroll_win_param & 0xff, MP_QSTR_set_scroll_win_param >> 8, 
    0x32, 0x30, 
    0x16, MP_QSTR_set_scroll_buf & 0xff, MP_QSTR_set_scroll_buf >> 8, 
    0x32, 0x31, 
    0x16, MP_QSTR_jpeg_start & 0xff, MP_QSTR_jpeg_start >> 8, 
    0x32, 0x32, 
    0x16, MP_QSTR_jpeg_data & 0xff, MP_QSTR_jpeg_data >> 8, 
    0x32, 0x33, 
    0x16, MP_QSTR_jpeg & 0xff, MP_QSTR_jpeg >> 8, 
    0x32, 0x34, 
    0x16, MP_QSTR_feed_wdt & 0xff, MP_QSTR_feed_wdt >> 8, 
    0x32, 0x35, 
    0x16, MP_QSTR_reset & 0xff, MP_QSTR_reset >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt__LCD160CR[54] = {
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR___init__),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR__send),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR__fcmd2),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR__fcmd2b),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR__waitfor),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_oflush),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_iflush),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_rgb),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_clip_line),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_power),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_orient),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_brightness),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_i2c_addr),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_uart_baudrate),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_startup_deco),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_save_to_flash),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_pixel),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_get_pixel),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_get_line),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_screen_dump),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_screen_load),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_pos),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_text_color),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_font),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_write),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_pen),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_erase),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_dot),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_rect),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_outline),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_interior),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_line),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_dot_no_clip),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_no_clip),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_outline_no_clip),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_rect_interior_no_clip),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_line_no_clip),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_poly_dot),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_poly_line),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_touch_config),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_is_touched),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_get_touch),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_spi_win),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_fast_spi),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_show_framebuf),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll_win_param),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_set_scroll_buf),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_jpeg_start),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_jpeg_data),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_jpeg),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_feed_wdt),
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR_reset),
};
STATIC const mp_raw_code_t raw_code_lcd160cr__lt_module_gt__LCD160CR = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_lcd160cr__lt_module_gt__LCD160CR,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt__LCD160CR,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 476,
    .n_obj = 0,
    .n_raw_code = 54,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_LCD160CR,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt__LCD160CR + 7,
        .opcodes = fun_data_lcd160cr__lt_module_gt__LCD160CR + 97,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr.py, scope lcd160cr_<module>
STATIC const byte fun_data_lcd160cr__lt_module_gt_[201] = {
    0x10, 0x38,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_lcd160cr_dot_py & 0xff, MP_QSTR_lcd160cr_dot_py >> 8,
    0x60, 0x30, 0x30, 0x39, 0x70, 0x24, 0x24, 0x24, 0x64, 0x24, 0x24, 0x44, 0x22, 0x25, 0x25, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x69, 0x20, 0x00,
    0x80, 
    0x10, MP_QSTR_const & 0xff, MP_QSTR_const >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_micropython & 0xff, MP_QSTR_micropython >> 8, 
    0x1c, MP_QSTR_const & 0xff, MP_QSTR_const >> 8, 
    0x16, MP_QSTR_const & 0xff, MP_QSTR_const >> 8, 
    0x59, 
    0x80, 
    0x10, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x2a, 0x01, 
    0x1b, MP_QSTR_utime & 0xff, MP_QSTR_utime >> 8, 
    0x1c, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x16, MP_QSTR_sleep_ms & 0xff, MP_QSTR_sleep_ms >> 8, 
    0x59, 
    0x80, 
    0x10, MP_QSTR_calcsize & 0xff, MP_QSTR_calcsize >> 8, 
    0x10, MP_QSTR_pack_into & 0xff, MP_QSTR_pack_into >> 8, 
    0x2a, 0x02, 
    0x1b, MP_QSTR_ustruct & 0xff, MP_QSTR_ustruct >> 8, 
    0x1c, MP_QSTR_calcsize & 0xff, MP_QSTR_calcsize >> 8, 
    0x16, MP_QSTR_calcsize & 0xff, MP_QSTR_calcsize >> 8, 
    0x1c, MP_QSTR_pack_into & 0xff, MP_QSTR_pack_into >> 8, 
    0x16, MP_QSTR_pack_into & 0xff, MP_QSTR_pack_into >> 8, 
    0x59, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x16, MP_QSTR_uerrno & 0xff, MP_QSTR_uerrno >> 8, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_machine & 0xff, MP_QSTR_machine >> 8, 
    0x16, MP_QSTR_machine & 0xff, MP_QSTR_machine >> 8, 
    0x80, 
    0x16, MP_QSTR_PORTRAIT & 0xff, MP_QSTR_PORTRAIT >> 8, 
    0x81, 
    0x16, MP_QSTR_LANDSCAPE & 0xff, MP_QSTR_LANDSCAPE >> 8, 
    0x82, 
    0x16, MP_QSTR_PORTRAIT_UPSIDEDOWN & 0xff, MP_QSTR_PORTRAIT_UPSIDEDOWN >> 8, 
    0x83, 
    0x16, MP_QSTR_LANDSCAPE_UPSIDEDOWN & 0xff, MP_QSTR_LANDSCAPE_UPSIDEDOWN >> 8, 
    0x80, 
    0x16, MP_QSTR_STARTUP_DECO_NONE & 0xff, MP_QSTR_STARTUP_DECO_NONE >> 8, 
    0x81, 
    0x16, MP_QSTR_STARTUP_DECO_MLOGO & 0xff, MP_QSTR_STARTUP_DECO_MLOGO >> 8, 
    0x82, 
    0x16, MP_QSTR_STARTUP_DECO_INFO & 0xff, MP_QSTR_STARTUP_DECO_INFO >> 8, 
    0x2c, 0x09, 
    0x80, 
    0x22, 0x92, 0x60, 
    0x62, 
    0x81, 
    0x22, 0xa5, 0x40, 
    0x62, 
    0x82, 
    0x22, 0x80, 0xcb, 0x00, 
    0x62, 
    0x83, 
    0x22, 0x81, 0x96, 0x00, 
    0x62, 
    0x84, 
    0x22, 0x82, 0xac, 0x00, 
    0x62, 
    0x85, 
    0x22, 0x83, 0xc2, 0x00, 
    0x62, 
    0x86, 
    0x22, 0x87, 0x84, 0x00, 
    0x62, 
    0x87, 
    0x22, 0x8e, 0x88, 0x00, 
    0x62, 
    0x88, 
    0x22, 0x9c, 0x90, 0x00, 
    0x62, 
    0x16, MP_QSTR__uart_baud_table & 0xff, MP_QSTR__uart_baud_table >> 8, 
    0x54, 
    0x32, 0x00, 
    0x10, MP_QSTR_LCD160CR & 0xff, MP_QSTR_LCD160CR >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_LCD160CR & 0xff, MP_QSTR_LCD160CR >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr__lt_module_gt_[1] = {
    MP_ROM_PTR(&raw_code_lcd160cr__lt_module_gt__LCD160CR),
};
const mp_raw_code_t raw_code_lcd160cr__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_lcd160cr__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 201,
    .n_obj = 0,
    .n_raw_code = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_lcd160cr_dot_py,
        .line_info = fun_data_lcd160cr__lt_module_gt_ + 6,
        .opcodes = fun_data_lcd160cr__lt_module_gt_ + 30,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr_test.py, scope lcd160cr_test__lt_module_gt__get_lcd
STATIC const byte fun_data_lcd160cr_test__lt_module_gt__get_lcd[36] = {
    0x19, 0x12,
    MP_QSTR_get_lcd & 0xff, MP_QSTR_get_lcd >> 8,
    MP_QSTR_lcd160cr_test_dot_py & 0xff, MP_QSTR_lcd160cr_test_dot_py >> 8,
    0x80, 0x07, 0x2d, 0x2a, 0x00,
    0x12, MP_QSTR_type & 0xff, MP_QSTR_type >> 8, 
    0xb0, 
    0x34, 0x01, 
    0x12, MP_QSTR_str & 0xff, MP_QSTR_str >> 8, 
    0xde, 
    0x44, 0x0a, 0x80, 
    0x12, MP_QSTR_lcd160cr & 0xff, MP_QSTR_lcd160cr >> 8, 
    0x14, MP_QSTR_LCD160CR & 0xff, MP_QSTR_LCD160CR >> 8, 
    0xb0, 
    0x36, 0x01, 
    0xc0, 
    0xb0, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr_test__lt_module_gt__get_lcd[1] = {
    MP_ROM_QSTR(MP_QSTR_lcd),
};
STATIC const mp_raw_code_t raw_code_lcd160cr_test__lt_module_gt__get_lcd = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr_test__lt_module_gt__get_lcd,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr_test__lt_module_gt__get_lcd,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_get_lcd,
        .qstr_source_file = MP_QSTR_lcd160cr_test_dot_py,
        .line_info = fun_data_lcd160cr_test__lt_module_gt__get_lcd + 6,
        .opcodes = fun_data_lcd160cr_test__lt_module_gt__get_lcd + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr_test.py, scope lcd160cr_test__lt_module_gt__show_adc
STATIC const byte fun_data_lcd160cr_test__lt_module_gt__show_adc[300] = {
    0x76, 0x34,
    MP_QSTR_show_adc & 0xff, MP_QSTR_show_adc >> 8,
    MP_QSTR_lcd160cr_test_dot_py & 0xff, MP_QSTR_lcd160cr_test_dot_py >> 8,
    0x80, 0x0d, 0x31, 0x23, 0x4d, 0x24, 0x26, 0x35, 0x2b, 0x28, 0x52, 0x2d, 0x33, 0x38, 0x26, 0x4b, 0x28, 0x2b, 0x54, 0x35, 0x33, 0x00,
    0xb1, 
    0x14, MP_QSTR_read_core_temp & 0xff, MP_QSTR_read_core_temp >> 8, 
    0x36, 0x00, 
    0xb1, 
    0x14, MP_QSTR_read_core_vbat & 0xff, MP_QSTR_read_core_vbat >> 8, 
    0x36, 0x00, 
    0x23, 0x02, 
    0x2b, 0x03, 
    0xc2, 
    0x48, 0x0c, 0x00, 
    0xb1, 
    0x14, MP_QSTR_read_vref & 0xff, MP_QSTR_read_vref >> 8, 
    0x36, 0x00, 
    0xb2, 
    0x82, 
    0x56, 
    0x4a, 0x05, 0x00, 
    0x59, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x80, 
    0x42, 0xde, 0x80, 
    0x57, 
    0xc3, 
    0xb0, 
    0x14, MP_QSTR_set_text_color & 0xff, MP_QSTR_set_text_color >> 8, 
    0x22, 0x86, 0x39, 
    0x22, 0x8c, 0x59, 
    0x22, 0x8c, 0x40, 
    0x2a, 0x03, 
    0xb3, 
    0x55, 
    0x80, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x22, 0x81, 0x20, 
    0xd9, 
    0x44, 0x1a, 0x80, 
    0xb0, 
    0x14, MP_QSTR_set_font & 0xff, MP_QSTR_set_font >> 8, 
    0x82, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_set_pos & 0xff, MP_QSTR_set_pos >> 8, 
    0x80, 
    0x22, 0x80, 0x64, 
    0xb3, 
    0x90, 
    0xf4, 
    0xf2, 
    0x36, 0x02, 
    0x59, 
    0x42, 0x20, 0x80, 
    0xb0, 
    0x14, MP_QSTR_set_font & 0xff, MP_QSTR_set_font >> 8, 
    0x82, 
    0x10, MP_QSTR_trans & 0xff, MP_QSTR_trans >> 8, 
    0x81, 
    0x36, 0x82, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_set_pos & 0xff, MP_QSTR_set_pos >> 8, 
    0x80, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x22, 0x3c, 
    0xf3, 
    0xb3, 
    0x90, 
    0xf4, 
    0xf2, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0x10, MP_QSTR__percent_4s_colon__space_ & 0xff, MP_QSTR__percent_4s_colon__space_ >> 8, 
    0x10, MP_QSTR_TEMP & 0xff, MP_QSTR_TEMP >> 8, 
    0x10, MP_QSTR_VBAT & 0xff, MP_QSTR_VBAT >> 8, 
    0x10, MP_QSTR_VREF & 0xff, MP_QSTR_VREF >> 8, 
    0x2a, 0x03, 
    0xb3, 
    0x55, 
    0xf8, 
    0x36, 0x01, 
    0x59, 
    0xb3, 
    0x80, 
    0xd8, 
    0x44, 0x0b, 0x80, 
    0x10, MP_QSTR__percent_6_dot_3fV & 0xff, MP_QSTR__percent_6_dot_3fV >> 8, 
    0xb2, 
    0xb3, 
    0x55, 
    0xf8, 
    0xc4, 
    0x42, 0x08, 0x80, 
    0x10, MP_QSTR__percent_5_dot_1f_deg_C & 0xff, MP_QSTR__percent_5_dot_1f_deg_C >> 8, 
    0xb2, 
    0xb3, 
    0x55, 
    0xf8, 
    0xc4, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x22, 0x81, 0x20, 
    0xd9, 
    0x44, 0x14, 0x80, 
    0xb0, 
    0x14, MP_QSTR_set_font & 0xff, MP_QSTR_set_font >> 8, 
    0x81, 
    0x10, MP_QSTR_bold & 0xff, MP_QSTR_bold >> 8, 
    0x80, 
    0x10, MP_QSTR_scale & 0xff, MP_QSTR_scale >> 8, 
    0x81, 
    0x36, 0x84, 0x01, 
    0x59, 
    0x42, 0x28, 0x80, 
    0xb0, 
    0x14, MP_QSTR_set_font & 0xff, MP_QSTR_set_font >> 8, 
    0x81, 
    0x10, MP_QSTR_bold & 0xff, MP_QSTR_bold >> 8, 
    0x80, 
    0x10, MP_QSTR_scale & 0xff, MP_QSTR_scale >> 8, 
    0x81, 
    0x10, MP_QSTR_trans & 0xff, MP_QSTR_trans >> 8, 
    0x81, 
    0x36, 0x86, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_set_pos & 0xff, MP_QSTR_set_pos >> 8, 
    0xad, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0x22, 0x3c, 
    0xf3, 
    0xb3, 
    0x90, 
    0xf4, 
    0xf2, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0xb4, 
    0x36, 0x01, 
    0x59, 
    0x81, 
    0xe5, 
    0x57, 
    0x83, 
    0xd7, 
    0x43, 0x1c, 0x7f, 
    0x59, 
    0x51, 
    0x63, 
};
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__show_adc_0 = {{&mp_type_float}, (mp_float_t)3.3};
#endif
STATIC const mp_rom_obj_t const_table_data_lcd160cr_test__lt_module_gt__show_adc[3] = {
    MP_ROM_QSTR(MP_QSTR_lcd),
    MP_ROM_QSTR(MP_QSTR_adc),
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__show_adc_0),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xc0d33332),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xc00e666666666666),
#endif
};
STATIC const mp_raw_code_t raw_code_lcd160cr_test__lt_module_gt__show_adc = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr_test__lt_module_gt__show_adc,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr_test__lt_module_gt__show_adc,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 300,
    .n_obj = 1,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_show_adc,
        .qstr_source_file = MP_QSTR_lcd160cr_test_dot_py,
        .line_info = fun_data_lcd160cr_test__lt_module_gt__show_adc + 6,
        .opcodes = fun_data_lcd160cr_test__lt_module_gt__show_adc + 28,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr_test.py, scope lcd160cr_test__lt_module_gt__test_features
STATIC const byte fun_data_lcd160cr_test__lt_module_gt__test_features[914] = {
    0xae, 0x21, 0x9c, 0x02,
    MP_QSTR_test_features & 0xff, MP_QSTR_test_features >> 8,
    MP_QSTR_lcd160cr_test_dot_py & 0xff, MP_QSTR_lcd160cr_test_dot_py >> 8,
    0x80, 0x29, 0x23, 0x46, 0x2c, 0x4b, 0x22, 0x66, 0x27, 0x28, 0x29, 0x67, 0x39, 0x28, 0x30, 0x2b, 0x2b, 0x2b, 0x6b, 0x22, 0x22, 0x24, 0x24, 0x3b, 0x6b, 0x24, 0x49, 0x46, 0x2d, 0x24, 0x26, 0x26, 0x3c, 0x4a, 0x26, 0x66, 0x1f, 0x2d, 0x24, 0x23, 0x23, 0x37, 0x37, 0x52, 0x39, 0x39, 0x3e, 0x2e, 0x3f, 0x3e, 0x2f, 0x27, 0x24, 0x43, 0x3f, 0x1f, 0x44, 0x68, 0x24, 0x68, 0x24, 0x29, 0x28, 0x27, 0x24, 0x22, 0x1f, 0x61, 0x20, 0x2a, 0x2d, 0x63, 0x29, 0x00,
    0x48, 0x1c, 0x00, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_pyb & 0xff, MP_QSTR_pyb >> 8, 
    0xc2, 
    0xb2, 
    0x14, MP_QSTR_ADCAll & 0xff, MP_QSTR_ADCAll >> 8, 
    0x8c, 
    0x22, 0xbc, 0x80, 0x00, 
    0x36, 0x02, 
    0xc3, 
    0xb2, 
    0x14, MP_QSTR_RTC & 0xff, MP_QSTR_RTC >> 8, 
    0x36, 0x00, 
    0xc4, 
    0x4a, 0x09, 0x00, 
    0x59, 
    0x51, 
    0xc3, 
    0x51, 
    0xc4, 
    0x4a, 0x01, 0x00, 
    0x5d, 
    0x12, MP_QSTR_get_lcd & 0xff, MP_QSTR_get_lcd >> 8, 
    0xb0, 
    0x34, 0x01, 
    0xc0, 
    0xb0, 
    0x14, MP_QSTR_set_orient & 0xff, MP_QSTR_set_orient >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_set_pen & 0xff, MP_QSTR_set_pen >> 8, 
    0x80, 
    0x80, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_erase & 0xff, MP_QSTR_erase >> 8, 
    0x36, 0x00, 
    0x59, 
    0x12, MP_QSTR_framebuf & 0xff, MP_QSTR_framebuf >> 8, 
    0x14, MP_QSTR_FrameBuffer & 0xff, MP_QSTR_FrameBuffer >> 8, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x22, 0x84, 0x42, 
    0x34, 0x01, 
    0x91, 
    0x91, 
    0x12, MP_QSTR_framebuf & 0xff, MP_QSTR_framebuf >> 8, 
    0x13, MP_QSTR_RGB565 & 0xff, MP_QSTR_RGB565 >> 8, 
    0x36, 0x04, 
    0xc5, 
    0xb5, 
    0x14, MP_QSTR_fill & 0xff, MP_QSTR_fill >> 8, 
    0x80, 
    0x36, 0x01, 
    0x59, 
    0xb5, 
    0x14, MP_QSTR_fill_rect & 0xff, MP_QSTR_fill_rect >> 8, 
    0x81, 
    0x81, 
    0x8f, 
    0x8f, 
    0x22, 0x87, 0xff, 0xff, 0x7f, 
    0x36, 0x05, 
    0x59, 
    0xb5, 
    0x14, MP_QSTR_vline & 0xff, MP_QSTR_vline >> 8, 
    0x84, 
    0x84, 
    0x8c, 
    0x80, 
    0x36, 0x04, 
    0x59, 
    0xb5, 
    0x14, MP_QSTR_vline & 0xff, MP_QSTR_vline >> 8, 
    0x88, 
    0x81, 
    0x8c, 
    0x80, 
    0x36, 0x04, 
    0x59, 
    0xb5, 
    0x14, MP_QSTR_vline & 0xff, MP_QSTR_vline >> 8, 
    0x8c, 
    0x84, 
    0x8c, 
    0x80, 
    0x36, 0x04, 
    0x59, 
    0xb5, 
    0x14, MP_QSTR_vline & 0xff, MP_QSTR_vline >> 8, 
    0x8e, 
    0x8d, 
    0x82, 
    0x80, 
    0x36, 0x04, 
    0x59, 
    0x8e, 
    0xc6, 
    0x93, 
    0xc7, 
    0x22, 0x80, 0x64, 
    0xc8, 
    0x22, 0x80, 0x4b, 
    0xc9, 
    0x12, MP_QSTR_framebuf & 0xff, MP_QSTR_framebuf >> 8, 
    0x14, MP_QSTR_FrameBuffer & 0xff, MP_QSTR_FrameBuffer >> 8, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0xb8, 
    0xb9, 
    0xf4, 
    0x82, 
    0xf4, 
    0x34, 0x01, 
    0xb8, 
    0xb9, 
    0x12, MP_QSTR_framebuf & 0xff, MP_QSTR_framebuf >> 8, 
    0x13, MP_QSTR_RGB565 & 0xff, MP_QSTR_RGB565 >> 8, 
    0x36, 0x04, 
    0xca, 
    0xb0, 
    0x14, MP_QSTR_set_spi_win & 0xff, MP_QSTR_set_spi_win >> 8, 
    0xb6, 
    0xb7, 
    0xb8, 
    0xb9, 
    0x36, 0x04, 
    0x59, 
    0x80, 
    0x57, 
    0xcb, 
    0xcc, 
    0x12, MP_QSTR_time & 0xff, MP_QSTR_time >> 8, 
    0x14, MP_QSTR_ticks_us & 0xff, MP_QSTR_ticks_us >> 8, 
    0x36, 0x00, 
    0xcd, 
    0x80, 
    0x42, 0x4e, 0x82, 
    0x57, 
    0xce, 
    0xb0, 
    0x14, MP_QSTR_get_touch & 0xff, MP_QSTR_get_touch >> 8, 
    0x36, 0x00, 
    0x30, 0x03, 
    0xcf, 
    0x26, 0x10, 
    0x26, 0x11, 
    0xbf, 
    0x44, 0x32, 0x80, 
    0x24, 0x10, 
    0xb6, 
    0xe6, 
    0x26, 0x10, 
    0x24, 0x11, 
    0xb7, 
    0xe6, 
    0x26, 0x11, 
    0x24, 0x10, 
    0x80, 
    0xdb, 
    0x44, 0x1c, 0x80, 
    0x24, 0x11, 
    0x80, 
    0xdb, 
    0x44, 0x15, 0x80, 
    0x24, 0x10, 
    0xb8, 
    0xd7, 
    0x44, 0x0e, 0x80, 
    0x24, 0x11, 
    0xb9, 
    0xd7, 
    0x44, 0x07, 0x80, 
    0x24, 0x10, 
    0x24, 0x11, 
    0x5a, 
    0xcb, 
    0xcc, 
    0x42, 0x0c, 0x80, 
    0xbb, 
    0x81, 
    0xf2, 
    0xb8, 
    0xf8, 
    0xcb, 
    0xbc, 
    0x81, 
    0xf2, 
    0xb9, 
    0xf8, 
    0xcc, 
    0xba, 
    0x14, MP_QSTR_fill & 0xff, MP_QSTR_fill >> 8, 
    0xb0, 
    0x14, MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8, 
    0x22, 0x81, 0x00, 
    0x12, MP_QSTR_int & 0xff, MP_QSTR_int >> 8, 
    0x22, 0x80, 0x40, 
    0x12, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x14, MP_QSTR_cos & 0xff, MP_QSTR_cos >> 8, 
    0x23, 0x02, 
    0xbe, 
    0xf4, 
    0x36, 0x01, 
    0xf4, 
    0x34, 0x01, 
    0xf2, 
    0x22, 0x81, 0x00, 
    0x22, 0x81, 0x40, 
    0x36, 0x03, 
    0x36, 0x01, 
    0x59, 
    0xba, 
    0x14, MP_QSTR_line & 0xff, MP_QSTR_line >> 8, 
    0xb8, 
    0x82, 
    0xf6, 
    0xb9, 
    0x82, 
    0xf6, 
    0xb8, 
    0x82, 
    0xf6, 
    0x12, MP_QSTR_int & 0xff, MP_QSTR_int >> 8, 
    0xa8, 
    0x12, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x14, MP_QSTR_cos & 0xff, MP_QSTR_cos >> 8, 
    0x23, 0x03, 
    0xbe, 
    0xf4, 
    0x36, 0x01, 
    0xf4, 
    0x34, 0x01, 
    0xf2, 
    0xb9, 
    0x82, 
    0xf6, 
    0x12, MP_QSTR_int & 0xff, MP_QSTR_int >> 8, 
    0xa8, 
    0x12, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x14, MP_QSTR_sin & 0xff, MP_QSTR_sin >> 8, 
    0x23, 0x04, 
    0xbe, 
    0xf4, 
    0x36, 0x01, 
    0xf4, 
    0x34, 0x01, 
    0xf2, 
    0xb0, 
    0x14, MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8, 
    0x22, 0x81, 0x00, 
    0x22, 0x81, 0x7f, 
    0x22, 0x80, 0x40, 
    0x36, 0x03, 
    0x36, 0x05, 
    0x59, 
    0xba, 
    0x14, MP_QSTR_hline & 0xff, MP_QSTR_hline >> 8, 
    0x80, 
    0xbc, 
    0xb8, 
    0xb0, 
    0x14, MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8, 
    0x22, 0x80, 0x40, 
    0x22, 0x80, 0x40, 
    0x22, 0x80, 0x40, 
    0x36, 0x03, 
    0x36, 0x04, 
    0x59, 
    0xba, 
    0x14, MP_QSTR_vline & 0xff, MP_QSTR_vline >> 8, 
    0xbb, 
    0x80, 
    0xb9, 
    0xb0, 
    0x14, MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8, 
    0x22, 0x80, 0x40, 
    0x22, 0x80, 0x40, 
    0x22, 0x80, 0x40, 
    0x36, 0x03, 
    0x36, 0x04, 
    0x59, 
    0xba, 
    0x14, MP_QSTR_rect & 0xff, MP_QSTR_rect >> 8, 
    0xbb, 
    0x83, 
    0xf3, 
    0xbc, 
    0x83, 
    0xf3, 
    0x87, 
    0x87, 
    0xb0, 
    0x14, MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8, 
    0x22, 0x80, 0x40, 
    0x22, 0x80, 0x40, 
    0x22, 0x80, 0x40, 
    0x36, 0x03, 
    0x36, 0x05, 
    0x59, 
    0x23, 0x05, 
    0xd1, 
    0x80, 
    0x23, 0x06, 
    0x2a, 0x03, 
    0x5f, 
    0x4b, 0x4e, 0x00, 
    0x26, 0x12, 
    0xb8, 
    0x82, 
    0xf6, 
    0x88, 
    0xf3, 
    0x12, MP_QSTR_int & 0xff, MP_QSTR_int >> 8, 
    0x22, 0x32, 
    0x12, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x14, MP_QSTR_cos & 0xff, MP_QSTR_cos >> 8, 
    0x23, 0x07, 
    0xbe, 
    0xf4, 
    0x24, 0x12, 
    0xf2, 
    0x36, 0x01, 
    0xf4, 
    0x34, 0x01, 
    0xf2, 
    0x26, 0x13, 
    0xb9, 
    0x82, 
    0xf6, 
    0x88, 
    0xf3, 
    0x12, MP_QSTR_int & 0xff, MP_QSTR_int >> 8, 
    0xa0, 
    0x12, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x14, MP_QSTR_sin & 0xff, MP_QSTR_sin >> 8, 
    0x23, 0x08, 
    0xbe, 
    0xf4, 
    0x24, 0x12, 
    0xf2, 
    0x36, 0x01, 
    0xf4, 
    0x34, 0x01, 
    0xf2, 
    0x26, 0x14, 
    0xba, 
    0x14, MP_QSTR_blit & 0xff, MP_QSTR_blit >> 8, 
    0xb5, 
    0x24, 0x13, 
    0x24, 0x14, 
    0x36, 0x03, 
    0x59, 
    0x42, 0xaf, 0x7f, 
    0x7d, 
    0x42, 0x45, 0x80, 
    0x57, 
    0x26, 0x15, 
    0xba, 
    0x14, MP_QSTR_text & 0xff, MP_QSTR_text >> 8, 
    0x23, 0x09, 
    0x85, 
    0xb9, 
    0x82, 
    0xf6, 
    0x89, 
    0x24, 0x15, 
    0xf4, 
    0xf2, 
    0x12, MP_QSTR_int & 0xff, MP_QSTR_int >> 8, 
    0x94, 
    0x12, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x14, MP_QSTR_sin & 0xff, MP_QSTR_sin >> 8, 
    0x23, 0x0a, 
    0xbe, 
    0x24, 0x15, 
    0xf2, 
    0xf4, 
    0x36, 0x01, 
    0xf4, 
    0x34, 0x01, 
    0xf2, 
    0xb0, 
    0x14, MP_QSTR_rgb & 0xff, MP_QSTR_rgb >> 8, 
    0x22, 0x81, 0x00, 
    0x8a, 
    0x24, 0x15, 
    0xf4, 
    0xf2, 
    0x80, 
    0x22, 0x81, 0x00, 
    0x8a, 
    0x24, 0x15, 
    0xf4, 
    0xf3, 
    0x36, 0x03, 
    0x36, 0x04, 
    0x59, 
    0x81, 
    0xe5, 
    0x57, 
    0x83, 
    0xd7, 
    0x43, 0xb5, 0x7f, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_show_framebuf & 0xff, MP_QSTR_show_framebuf >> 8, 
    0xba, 
    0x36, 0x01, 
    0x59, 
    0xb3, 
    0x44, 0x08, 0x80, 
    0x12, MP_QSTR_show_adc & 0xff, MP_QSTR_show_adc >> 8, 
    0xb0, 
    0xb3, 
    0x34, 0x02, 
    0x59, 
    0xb4, 
    0x44, 0x3e, 0x80, 
    0xb0, 
    0x14, MP_QSTR_set_pos & 0xff, MP_QSTR_set_pos >> 8, 
    0x82, 
    0x80, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_set_font & 0xff, MP_QSTR_set_font >> 8, 
    0x81, 
    0x36, 0x01, 
    0x59, 
    0xb4, 
    0x14, MP_QSTR_datetime & 0xff, MP_QSTR_datetime >> 8, 
    0x36, 0x00, 
    0xcf, 
    0xb0, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0x23, 0x0b, 
    0xbf, 
    0x80, 
    0x55, 
    0xbf, 
    0x81, 
    0x55, 
    0xbf, 
    0x82, 
    0x55, 
    0xbf, 
    0x84, 
    0x55, 
    0xbf, 
    0x85, 
    0x55, 
    0xbf, 
    0x86, 
    0x55, 
    0xbf, 
    0x87, 
    0x55, 
    0x22, 0x86, 0x8d, 0x20, 
    0xf6, 
    0x2a, 0x07, 
    0xf8, 
    0x36, 0x01, 
    0x59, 
    0x12, MP_QSTR_time & 0xff, MP_QSTR_time >> 8, 
    0x14, MP_QSTR_ticks_us & 0xff, MP_QSTR_ticks_us >> 8, 
    0x36, 0x00, 
    0x26, 0x16, 
    0x12, MP_QSTR_time & 0xff, MP_QSTR_time >> 8, 
    0x14, MP_QSTR_ticks_diff & 0xff, MP_QSTR_ticks_diff >> 8, 
    0x24, 0x16, 
    0xbd, 
    0x36, 0x02, 
    0x26, 0x17, 
    0x24, 0x16, 
    0xcd, 
    0xb0, 
    0x14, MP_QSTR_set_pos & 0xff, MP_QSTR_set_pos >> 8, 
    0x82, 
    0x89, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0x10, MP_QSTR__percent__dot_2f_space_fps & 0xff, MP_QSTR__percent__dot_2f_space_fps >> 8, 
    0x22, 0xbd, 0x84, 0x40, 
    0x24, 0x17, 
    0xf7, 
    0xf8, 
    0x36, 0x01, 
    0x59, 
    0x81, 
    0xe5, 
    0x57, 
    0x22, 0x82, 0x2c, 
    0xd7, 
    0x43, 0xaa, 0x7d, 
    0x59, 
    0x51, 
    0x63, 
};
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_0 = {{&mp_type_float}, (mp_float_t)0.1};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_1 = {{&mp_type_float}, (mp_float_t)0.2};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_2 = {{&mp_type_float}, (mp_float_t)0.2};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_3 = {{&mp_type_float}, (mp_float_t)0.2};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_4 = {{&mp_type_float}, (mp_float_t)0.2};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_5 = {{&mp_type_float}, (mp_float_t)0.05};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_6 = {{&mp_type_float}, (mp_float_t)0.05};
#endif
STATIC const mp_obj_str_t const_obj_lcd160cr_test__lt_module_gt__test_features_7 = {{&mp_type_str}, 8203, 11, (const byte*)"\x4d\x69\x63\x72\x6f\x50\x79\x74\x68\x6f\x6e"};
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_features_8 = {{&mp_type_float}, (mp_float_t)0.1};
#endif
STATIC const mp_obj_str_t const_obj_lcd160cr_test__lt_module_gt__test_features_9 = {{&mp_type_str}, 8109, 32, (const byte*)"\x25\x34\x64\x2d\x25\x30\x32\x64\x2d\x25\x30\x32\x64\x20\x25\x32\x64\x3a\x25\x30\x32\x64\x3a\x25\x30\x32\x64\x2e\x25\x30\x31\x64"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr_test__lt_module_gt__test_features[12] = {
    MP_ROM_QSTR(MP_QSTR_lcd),
    MP_ROM_QSTR(MP_QSTR_orient),
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_0),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbe4cccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfbd99999999999a),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_1),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbeccccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfcd99999999999a),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_2),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbeccccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfcd99999999999a),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_3),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbeccccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfcd99999999999a),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_4),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbeccccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfcd99999999999a),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_5),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbdccccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfad99999999999a),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_6),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbdccccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfad99999999999a),
#endif
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_7),
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_8),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xbe4cccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbfbd99999999999a),
#endif
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_features_9),
};
STATIC const mp_raw_code_t raw_code_lcd160cr_test__lt_module_gt__test_features = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr_test__lt_module_gt__test_features,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr_test__lt_module_gt__test_features,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 914,
    .n_obj = 10,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 38,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_test_features,
        .qstr_source_file = MP_QSTR_lcd160cr_test_dot_py,
        .line_info = fun_data_lcd160cr_test__lt_module_gt__test_features + 8,
        .opcodes = fun_data_lcd160cr_test__lt_module_gt__test_features + 82,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr_test.py, scope lcd160cr_test__lt_module_gt__test_mandel_in_set
STATIC const byte fun_data_lcd160cr_test__lt_module_gt__test_mandel_in_set[54] = {
    0x29, 0x18,
    MP_QSTR_in_set & 0xff, MP_QSTR_in_set >> 8,
    MP_QSTR_lcd160cr_test_dot_py & 0xff, MP_QSTR_lcd160cr_test_dot_py >> 8,
    0x80, 0x93, 0x22, 0x26, 0x26, 0x2d, 0x2b, 0x00,
    0x80, 
    0xc1, 
    0x80, 
    0x42, 0x19, 0x80, 
    0x57, 
    0xc2, 
    0xb1, 
    0xb1, 
    0xf4, 
    0xb0, 
    0xf2, 
    0xc1, 
    0x12, MP_QSTR_abs & 0xff, MP_QSTR_abs >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x22, 0x80, 0x64, 
    0xd8, 
    0x44, 0x02, 0x80, 
    0xb2, 
    0x63, 
    0x81, 
    0xe5, 
    0x57, 
    0xa0, 
    0xd7, 
    0x43, 0xe1, 0x7f, 
    0x59, 
    0x80, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr_test__lt_module_gt__test_mandel_in_set[1] = {
    MP_ROM_QSTR(MP_QSTR_c),
};
STATIC const mp_raw_code_t raw_code_lcd160cr_test__lt_module_gt__test_mandel_in_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_lcd160cr_test__lt_module_gt__test_mandel_in_set,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr_test__lt_module_gt__test_mandel_in_set,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 54,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_in_set,
        .qstr_source_file = MP_QSTR_lcd160cr_test_dot_py,
        .line_info = fun_data_lcd160cr_test__lt_module_gt__test_mandel_in_set + 6,
        .opcodes = fun_data_lcd160cr_test__lt_module_gt__test_mandel_in_set + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr_test.py, scope lcd160cr_test__lt_module_gt__test_mandel
STATIC const byte fun_data_lcd160cr_test__lt_module_gt__test_mandel[225] = {
    0xa2, 0x11, 0x38,
    MP_QSTR_test_mandel & 0xff, MP_QSTR_test_mandel >> 8,
    MP_QSTR_lcd160cr_test_dot_py & 0xff, MP_QSTR_lcd160cr_test_dot_py >> 8,
    0x80, 0x8c, 0x27, 0x28, 0x2c, 0x67, 0x83, 0x09, 0x25, 0x65, 0x29, 0x2b, 0x67, 0x27, 0x27, 0x27, 0x27, 0x34, 0x26, 0x4b, 0x29, 0x26, 0x34, 0x00,
    0x12, MP_QSTR_get_lcd & 0xff, MP_QSTR_get_lcd >> 8, 
    0xb0, 
    0x34, 0x01, 
    0xc0, 
    0xb0, 
    0x14, MP_QSTR_set_orient & 0xff, MP_QSTR_set_orient >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_set_pen & 0xff, MP_QSTR_set_pen >> 8, 
    0x80, 
    0x22, 0x83, 0xff, 0x7f, 
    0x36, 0x02, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_erase & 0xff, MP_QSTR_erase >> 8, 
    0x36, 0x00, 
    0x59, 
    0x32, 0x07, 
    0xc2, 
    0xb0, 
    0x13, MP_QSTR_w & 0xff, MP_QSTR_w >> 8, 
    0xc3, 
    0xb0, 
    0x13, MP_QSTR_h & 0xff, MP_QSTR_h >> 8, 
    0xc4, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0xb3, 
    0x82, 
    0xf4, 
    0x34, 0x01, 
    0xc5, 
    0xb0, 
    0x14, MP_QSTR_set_spi_win & 0xff, MP_QSTR_set_spi_win >> 8, 
    0x80, 
    0x80, 
    0xb3, 
    0xb4, 
    0x36, 0x04, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_fast_spi & 0xff, MP_QSTR_fast_spi >> 8, 
    0x36, 0x00, 
    0xc6, 
    0xb4, 
    0x81, 
    0xf3, 
    0x23, 0x02, 
    0xf7, 
    0xc7, 
    0xb3, 
    0x81, 
    0xf3, 
    0x23, 0x03, 
    0xf7, 
    0xc8, 
    0xb4, 
    0x80, 
    0x42, 0x5b, 0x80, 
    0x57, 
    0xc9, 
    0xb3, 
    0x80, 
    0x42, 0x42, 0x80, 
    0x57, 
    0xca, 
    0xb2, 
    0xb9, 
    0xb7, 
    0xf7, 
    0x23, 0x04, 
    0xf3, 
    0xba, 
    0xb8, 
    0xf7, 
    0x23, 0x05, 
    0xf3, 
    0x23, 0x06, 
    0xf4, 
    0xf2, 
    0x34, 0x01, 
    0xcb, 
    0xbb, 
    0x90, 
    0xd7, 
    0x44, 0x0b, 0x80, 
    0xbb, 
    0x8c, 
    0xf0, 
    0xbb, 
    0x86, 
    0xf0, 
    0xed, 
    0xcc, 
    0x42, 0x09, 0x80, 
    0x22, 0x83, 0xf0, 0x00, 
    0xbb, 
    0x86, 
    0xf0, 
    0xed, 
    0xcc, 
    0xbc, 
    0xb5, 
    0x82, 
    0xba, 
    0xf4, 
    0x56, 
    0xbc, 
    0x88, 
    0xf1, 
    0xb5, 
    0x82, 
    0xba, 
    0xf4, 
    0x81, 
    0xf2, 
    0x56, 
    0x81, 
    0xe5, 
    0x58, 
    0x5a, 
    0xd7, 
    0x43, 0xb8, 0x7f, 
    0x59, 
    0x59, 
    0xb6, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0xb5, 
    0x36, 0x01, 
    0x59, 
    0x81, 
    0xe5, 
    0x58, 
    0x5a, 
    0xd7, 
    0x43, 0x9f, 0x7f, 
    0x59, 
    0x59, 
    0x51, 
    0x63, 
};
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_mandel_0 = {{&mp_type_float}, (mp_float_t)3.2};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_mandel_1 = {{&mp_type_float}, (mp_float_t)2.4};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_mandel_2 = {{&mp_type_float}, (mp_float_t)2.3};
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
STATIC const mp_obj_float_t const_obj_lcd160cr_test__lt_module_gt__test_mandel_3 = {{&mp_type_float}, (mp_float_t)1.2};
#endif
STATIC const mp_obj_complex_t const_obj_lcd160cr_test__lt_module_gt__test_mandel_4 = {{&mp_type_complex}, (mp_float_t)0, (mp_float_t)1};
STATIC const mp_rom_obj_t const_table_data_lcd160cr_test__lt_module_gt__test_mandel[8] = {
    MP_ROM_QSTR(MP_QSTR_lcd),
    MP_ROM_QSTR(MP_QSTR_orient),
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_mandel_0),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xc0ccccce),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xc00d99999999999a),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_mandel_1),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xc099999a),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xc007333333333333),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_mandel_2),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xc0933332),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xc006666666666666),
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_mandel_3),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
    (mp_rom_obj_t)(0xc019999a),
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
    (mp_rom_obj_t)(0xbff7333333333333),
#endif
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__test_mandel_4),
    MP_ROM_PTR(&raw_code_lcd160cr_test__lt_module_gt__test_mandel_in_set),
};
STATIC const mp_raw_code_t raw_code_lcd160cr_test__lt_module_gt__test_mandel = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr_test__lt_module_gt__test_mandel,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr_test__lt_module_gt__test_mandel,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 225,
    .n_obj = 5,
    .n_raw_code = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 21,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_test_mandel,
        .qstr_source_file = MP_QSTR_lcd160cr_test_dot_py,
        .line_info = fun_data_lcd160cr_test__lt_module_gt__test_mandel + 7,
        .opcodes = fun_data_lcd160cr_test__lt_module_gt__test_mandel + 31,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr_test.py, scope lcd160cr_test__lt_module_gt__test_all
STATIC const byte fun_data_lcd160cr_test__lt_module_gt__test_all[37] = {
    0xa2, 0x01, 0x12,
    MP_QSTR_test_all & 0xff, MP_QSTR_test_all >> 8,
    MP_QSTR_lcd160cr_test_dot_py & 0xff, MP_QSTR_lcd160cr_test_dot_py >> 8,
    0x80, 0xb3, 0x27, 0x28, 0x00,
    0x12, MP_QSTR_get_lcd & 0xff, MP_QSTR_get_lcd >> 8, 
    0xb0, 
    0x34, 0x01, 
    0xc0, 
    0x12, MP_QSTR_test_features & 0xff, MP_QSTR_test_features >> 8, 
    0xb0, 
    0xb1, 
    0x34, 0x02, 
    0x59, 
    0x12, MP_QSTR_test_mandel & 0xff, MP_QSTR_test_mandel >> 8, 
    0xb0, 
    0xb1, 
    0x34, 0x02, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_lcd160cr_test__lt_module_gt__test_all[2] = {
    MP_ROM_QSTR(MP_QSTR_lcd),
    MP_ROM_QSTR(MP_QSTR_orient),
};
STATIC const mp_raw_code_t raw_code_lcd160cr_test__lt_module_gt__test_all = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_lcd160cr_test__lt_module_gt__test_all,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr_test__lt_module_gt__test_all,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 37,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_test_all,
        .qstr_source_file = MP_QSTR_lcd160cr_test_dot_py,
        .line_info = fun_data_lcd160cr_test__lt_module_gt__test_all + 7,
        .opcodes = fun_data_lcd160cr_test__lt_module_gt__test_all + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file lcd160cr_test.py, scope lcd160cr_test_<module>
STATIC const byte fun_data_lcd160cr_test__lt_module_gt_[132] = {
    0x08, 0x28,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_lcd160cr_test_dot_py & 0xff, MP_QSTR_lcd160cr_test_dot_py >> 8,
    0x60, 0x1f, 0x61, 0x65, 0x60, 0x85, 0x1b, 0x8e, 0x63, 0x8e, 0x28, 0x6e, 0x60, 0x28, 0x28, 0x00,
    0x80, 
    0x51, 
    0x1b, MP_QSTR_time & 0xff, MP_QSTR_time >> 8, 
    0x16, MP_QSTR_time & 0xff, MP_QSTR_time >> 8, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x16, MP_QSTR_math & 0xff, MP_QSTR_math >> 8, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_framebuf & 0xff, MP_QSTR_framebuf >> 8, 
    0x16, MP_QSTR_framebuf & 0xff, MP_QSTR_framebuf >> 8, 
    0x80, 
    0x51, 
    0x1b, MP_QSTR_lcd160cr & 0xff, MP_QSTR_lcd160cr >> 8, 
    0x16, MP_QSTR_lcd160cr & 0xff, MP_QSTR_lcd160cr >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_get_lcd & 0xff, MP_QSTR_get_lcd >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR_show_adc & 0xff, MP_QSTR_show_adc >> 8, 
    0x11, MP_QSTR_lcd160cr & 0xff, MP_QSTR_lcd160cr >> 8, 
    0x13, MP_QSTR_PORTRAIT & 0xff, MP_QSTR_PORTRAIT >> 8, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x05, 
    0x16, MP_QSTR_test_features & 0xff, MP_QSTR_test_features >> 8, 
    0x11, MP_QSTR_lcd160cr & 0xff, MP_QSTR_lcd160cr >> 8, 
    0x13, MP_QSTR_PORTRAIT & 0xff, MP_QSTR_PORTRAIT >> 8, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x06, 
    0x16, MP_QSTR_test_mandel & 0xff, MP_QSTR_test_mandel >> 8, 
    0x11, MP_QSTR_lcd160cr & 0xff, MP_QSTR_lcd160cr >> 8, 
    0x13, MP_QSTR_PORTRAIT & 0xff, MP_QSTR_PORTRAIT >> 8, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x07, 
    0x16, MP_QSTR_test_all & 0xff, MP_QSTR_test_all >> 8, 
    0x11, MP_QSTR_print & 0xff, MP_QSTR_print >> 8, 
    0x23, 0x00, 
    0x34, 0x01, 
    0x59, 
    0x11, MP_QSTR_print & 0xff, MP_QSTR_print >> 8, 
    0x23, 0x01, 
    0x34, 0x01, 
    0x59, 
    0x11, MP_QSTR_print & 0xff, MP_QSTR_print >> 8, 
    0x23, 0x02, 
    0x34, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_obj_str_t const_obj_lcd160cr_test__lt_module_gt__0 = {{&mp_type_str}, 8425, 33, (const byte*)"\x54\x6f\x20\x72\x75\x6e\x20\x61\x6c\x6c\x20\x74\x65\x73\x74\x73\x3a\x20\x74\x65\x73\x74\x5f\x61\x6c\x6c\x28\x3c\x6c\x63\x64\x3e\x29"};
STATIC const mp_obj_str_t const_obj_lcd160cr_test__lt_module_gt__1 = {{&mp_type_str}, 43873, 48, (const byte*)"\x49\x6e\x64\x69\x76\x69\x64\x75\x61\x6c\x20\x74\x65\x73\x74\x73\x20\x61\x72\x65\x3a\x20\x74\x65\x73\x74\x5f\x66\x65\x61\x74\x75\x72\x65\x73\x2c\x20\x74\x65\x73\x74\x5f\x6d\x61\x6e\x64\x65\x6c"};
STATIC const mp_obj_str_t const_obj_lcd160cr_test__lt_module_gt__2 = {{&mp_type_str}, 63446, 68, (const byte*)"\x3c\x6c\x63\x64\x3e\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x73\x68\x6f\x75\x6c\x64\x20\x62\x65\x20\x61\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2c\x20\x65\x67\x20\x22\x58\x22\x2c\x20\x6f\x72\x20\x61\x6e\x20\x4c\x43\x44\x31\x36\x30\x43\x52\x20\x6f\x62\x6a\x65\x63\x74"};
STATIC const mp_rom_obj_t const_table_data_lcd160cr_test__lt_module_gt_[8] = {
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__0),
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__1),
    MP_ROM_PTR(&const_obj_lcd160cr_test__lt_module_gt__2),
    MP_ROM_PTR(&raw_code_lcd160cr_test__lt_module_gt__get_lcd),
    MP_ROM_PTR(&raw_code_lcd160cr_test__lt_module_gt__show_adc),
    MP_ROM_PTR(&raw_code_lcd160cr_test__lt_module_gt__test_features),
    MP_ROM_PTR(&raw_code_lcd160cr_test__lt_module_gt__test_mandel),
    MP_ROM_PTR(&raw_code_lcd160cr_test__lt_module_gt__test_all),
};
const mp_raw_code_t raw_code_lcd160cr_test__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_lcd160cr_test__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_lcd160cr_test__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 132,
    .n_obj = 3,
    .n_raw_code = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_lcd160cr_test_dot_py,
        .line_info = fun_data_lcd160cr_test__lt_module_gt_ + 6,
        .opcodes = fun_data_lcd160cr_test__lt_module_gt_ + 22,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWireError
STATIC const byte fun_data_onewire__lt_module_gt__OneWireError[23] = {
    0x00, 0x0e,
    MP_QSTR_OneWireError & 0xff, MP_QSTR_OneWireError >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x8c, 0x07, 0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_OneWireError & 0xff, MP_QSTR_OneWireError >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWireError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire__lt_module_gt__OneWireError,
    .const_table = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_OneWireError,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWireError + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWireError + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire___init__
STATIC const byte fun_data_onewire__lt_module_gt__OneWire___init__[35] = {
    0x2a, 0x10,
    MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x10, 0x25, 0x00,
    0xb1, 
    0xb0, 
    0x18, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0x14, MP_QSTR_init & 0xff, MP_QSTR_init >> 8, 
    0xb1, 
    0x13, MP_QSTR_OPEN_DRAIN & 0xff, MP_QSTR_OPEN_DRAIN >> 8, 
    0xb1, 
    0x13, MP_QSTR_PULL_UP & 0xff, MP_QSTR_PULL_UP >> 8, 
    0x36, 0x02, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire___init__[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_pin),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire___init__,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 35,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR___init__,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire___init__ + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire___init__ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_reset
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_reset[40] = {
    0xaa, 0x01, 0x14,
    MP_QSTR_reset & 0xff, MP_QSTR_reset >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x14, 0x2d, 0x28, 0x24, 0x00,
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_reset & 0xff, MP_QSTR_reset >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0x36, 0x01, 
    0xc2, 
    0xb1, 
    0x44, 0x08, 0x80, 
    0xb2, 
    0x43, 0x04, 0x80, 
    0x12, MP_QSTR_OneWireError & 0xff, MP_QSTR_OneWireError >> 8, 
    0x65, 
    0xb2, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_reset[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_required),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_reset,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 40,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name = MP_QSTR_reset,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_reset + 7,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_reset + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_readbit
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_readbit[22] = {
    0x19, 0x0e,
    MP_QSTR_readbit & 0xff, MP_QSTR_readbit >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x1a, 0x00,
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_readbit & 0xff, MP_QSTR_readbit >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0x36, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_readbit[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_readbit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_readbit,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_readbit,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 22,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_readbit,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_readbit + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_readbit + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_readbyte
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_readbyte[22] = {
    0x19, 0x0e,
    MP_QSTR_readbyte & 0xff, MP_QSTR_readbyte >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x1d, 0x00,
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_readbyte & 0xff, MP_QSTR_readbyte >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0x36, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_readbyte[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_readbyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_readbyte,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_readbyte,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 22,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_readbyte,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_readbyte + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_readbyte + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_readinto
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_readinto[49] = {
    0x3a, 0x10,
    MP_QSTR_readinto & 0xff, MP_QSTR_readinto >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x20, 0x2c, 0x00,
    0x12, MP_QSTR_len & 0xff, MP_QSTR_len >> 8, 
    0xb1, 
    0x34, 0x01, 
    0x80, 
    0x42, 0x13, 0x80, 
    0x57, 
    0xc2, 
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_readbyte & 0xff, MP_QSTR_readbyte >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0x36, 0x01, 
    0xb1, 
    0xb2, 
    0x56, 
    0x81, 
    0xe5, 
    0x58, 
    0x5a, 
    0xd7, 
    0x43, 0xe7, 0x7f, 
    0x59, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_readinto[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_readinto,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 49,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_readinto,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_readinto + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_readinto + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_writebit
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_writebit[23] = {
    0x2a, 0x0e,
    MP_QSTR_writebit & 0xff, MP_QSTR_writebit >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x24, 0x00,
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_writebit & 0xff, MP_QSTR_writebit >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0xb1, 
    0x36, 0x02, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_writebit[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_value),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_writebit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_writebit,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_writebit,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_writebit,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_writebit + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_writebit + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_writebyte
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_writebyte[23] = {
    0x2a, 0x0e,
    MP_QSTR_writebyte & 0xff, MP_QSTR_writebyte >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x27, 0x00,
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_writebyte & 0xff, MP_QSTR_writebyte >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0xb1, 
    0x36, 0x02, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_writebyte[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_value),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_writebyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_writebyte,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_writebyte,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_writebyte,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_writebyte + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_writebyte + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_write
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_write[35] = {
    0x52, 0x10,
    MP_QSTR_write & 0xff, MP_QSTR_write >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x2a, 0x26, 0x00,
    0xb1, 
    0x5f, 
    0x4b, 0x12, 0x00, 
    0xc2, 
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_writebyte & 0xff, MP_QSTR_writebyte >> 8, 
    0xb0, 
    0x13, MP_QSTR_pin & 0xff, MP_QSTR_pin >> 8, 
    0xb2, 
    0x36, 0x02, 
    0x59, 
    0x42, 0xeb, 0x7f, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_write[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_buf),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_write,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_write,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 35,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_write,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_write + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_write + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_select_rom
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_select_rom[39] = {
    0x22, 0x12,
    MP_QSTR_select_rom & 0xff, MP_QSTR_select_rom >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x2e, 0x27, 0x2b, 0x00,
    0xb0, 
    0x14, MP_QSTR_reset & 0xff, MP_QSTR_reset >> 8, 
    0x36, 0x00, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_writebyte & 0xff, MP_QSTR_writebyte >> 8, 
    0xb0, 
    0x13, MP_QSTR_MATCH_ROM & 0xff, MP_QSTR_MATCH_ROM >> 8, 
    0x36, 0x01, 
    0x59, 
    0xb0, 
    0x14, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x59, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_select_rom[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_rom),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_select_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_select_rom,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_select_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 39,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_select_rom,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_select_rom + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_select_rom + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_scan
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_scan[77] = {
    0x49, 0x20,
    MP_QSTR_scan & 0xff, MP_QSTR_scan >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x33, 0x23, 0x24, 0x22, 0x26, 0x2c, 0x24, 0x26, 0x26, 0x2e, 0x00,
    0x2b, 0x00, 
    0xc1, 
    0x22, 0x80, 0x41, 
    0xc2, 
    0x50, 
    0xc3, 
    0x80, 
    0x42, 0x23, 0x80, 
    0x57, 
    0xc4, 
    0xb0, 
    0x14, MP_QSTR__search_rom & 0xff, MP_QSTR__search_rom >> 8, 
    0xb3, 
    0xb2, 
    0x36, 0x02, 
    0x30, 0x02, 
    0xc3, 
    0xc2, 
    0xb3, 
    0x44, 0x06, 0x80, 
    0xb1, 
    0xb3, 
    0x2b, 0x01, 
    0xe5, 
    0xc1, 
    0xb2, 
    0x80, 
    0xd9, 
    0x44, 0x03, 0x80, 
    0x42, 0x0a, 0x80, 
    0x81, 
    0xe5, 
    0x57, 
    0x22, 0x81, 0x7f, 
    0xd7, 
    0x43, 0xd5, 0x7f, 
    0x59, 
    0xb1, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_scan[1] = {
    MP_ROM_QSTR(MP_QSTR_self),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_scan,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 77,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_scan,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_scan + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_scan + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire__search_rom
STATIC const byte fun_data_onewire__lt_module_gt__OneWire__search_rom[203] = {
    0x73, 0x3e,
    MP_QSTR__search_rom & 0xff, MP_QSTR__search_rom >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x3f, 0x29, 0x25, 0x2b, 0x24, 0x27, 0x27, 0x22, 0x24, 0x26, 0x22, 0x26, 0x27, 0x29, 0x24, 0x48, 0x24, 0x36, 0x22, 0x22, 0x28, 0x24, 0x26, 0x2d, 0x2d, 0x00,
    0xb0, 
    0x14, MP_QSTR_reset & 0xff, MP_QSTR_reset >> 8, 
    0x36, 0x00, 
    0x43, 0x05, 0x80, 
    0x51, 
    0x80, 
    0x2a, 0x02, 
    0x63, 
    0xb0, 
    0x14, MP_QSTR_writebyte & 0xff, MP_QSTR_writebyte >> 8, 
    0xb0, 
    0x13, MP_QSTR_SEARCH_ROM & 0xff, MP_QSTR_SEARCH_ROM >> 8, 
    0x36, 0x01, 
    0x59, 
    0xb1, 
    0x43, 0x07, 0x80, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x88, 
    0x34, 0x01, 
    0xc1, 
    0x12, MP_QSTR_bytearray & 0xff, MP_QSTR_bytearray >> 8, 
    0x88, 
    0x34, 0x01, 
    0xc3, 
    0x80, 
    0xc4, 
    0x22, 0x80, 0x40, 
    0xc5, 
    0x80, 
    0x42, 0x69, 0x80, 
    0x57, 
    0xc6, 
    0x80, 
    0xc7, 
    0x80, 
    0x42, 0x54, 0x80, 
    0x57, 
    0xc8, 
    0xb0, 
    0x14, MP_QSTR_readbit & 0xff, MP_QSTR_readbit >> 8, 
    0x36, 0x00, 
    0xc9, 
    0xb0, 
    0x14, MP_QSTR_readbit & 0xff, MP_QSTR_readbit >> 8, 
    0x36, 0x00, 
    0x44, 0x0c, 0x80, 
    0xb9, 
    0x44, 0x05, 0x80, 
    0x51, 
    0x80, 
    0x2a, 0x02, 
    0x63, 
    0x42, 0x1e, 0x80, 
    0xb9, 
    0x43, 0x1a, 0x80, 
    0xb2, 
    0xb5, 
    0xd8, 
    0x43, 0x10, 0x80, 
    0xb1, 
    0xb6, 
    0x55, 
    0x81, 
    0xb8, 
    0xf0, 
    0xef, 
    0x44, 0x0a, 0x80, 
    0xb2, 
    0xb5, 
    0xdc, 
    0x44, 0x04, 0x80, 
    0x81, 
    0xc9, 
    0xb5, 
    0xc4, 
    0xb0, 
    0x14, MP_QSTR_writebit & 0xff, MP_QSTR_writebit >> 8, 
    0xb9, 
    0x36, 0x01, 
    0x59, 
    0xb9, 
    0x44, 0x06, 0x80, 
    0xb7, 
    0x81, 
    0xb8, 
    0xf0, 
    0xe0, 
    0xc7, 
    0xb5, 
    0x81, 
    0xe6, 
    0xc5, 
    0x81, 
    0xe5, 
    0x57, 
    0x88, 
    0xd7, 
    0x43, 0xa6, 0x7f, 
    0x59, 
    0xb7, 
    0xb3, 
    0xb6, 
    0x56, 
    0x81, 
    0xe5, 
    0x57, 
    0x88, 
    0xd7, 
    0x43, 0x91, 0x7f, 
    0x59, 
    0xb3, 
    0xb4, 
    0x2a, 0x02, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire__search_rom[3] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_l_rom),
    MP_ROM_QSTR(MP_QSTR_diff),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire__search_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire__search_rom,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire__search_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 203,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__search_rom,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire__search_rom + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire__search_rom + 33,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire_crc8
STATIC const byte fun_data_onewire__lt_module_gt__OneWire_crc8[19] = {
    0x22, 0x0e,
    MP_QSTR_crc8 & 0xff, MP_QSTR_crc8 >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x80, 0x5b, 0x00,
    0x12, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x14, MP_QSTR_crc8 & 0xff, MP_QSTR_crc8 >> 8, 
    0xb1, 
    0x36, 0x01, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire_crc8[2] = {
    MP_ROM_QSTR(MP_QSTR_self),
    MP_ROM_QSTR(MP_QSTR_data),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire_crc8 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire_crc8,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire_crc8,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_obj = 0,
    .n_raw_code = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_crc8,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire_crc8 + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire_crc8 + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt__OneWire
STATIC const byte fun_data_onewire__lt_module_gt__OneWire[126] = {
    0x08, 0x38,
    MP_QSTR_OneWire & 0xff, MP_QSTR_OneWire >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x8c, 0x0b, 0x26, 0x26, 0x46, 0x65, 0x20, 0x69, 0x60, 0x65, 0x65, 0x65, 0x20, 0x65, 0x65, 0x65, 0x20, 0x65, 0x40, 0x85, 0x0c, 0x85, 0x1c, 0x00,
    0x11, MP_QSTR___name__ & 0xff, MP_QSTR___name__ >> 8, 
    0x16, MP_QSTR___module__ & 0xff, MP_QSTR___module__ >> 8, 
    0x10, MP_QSTR_OneWire & 0xff, MP_QSTR_OneWire >> 8, 
    0x16, MP_QSTR___qualname__ & 0xff, MP_QSTR___qualname__ >> 8, 
    0x22, 0x81, 0x70, 
    0x16, MP_QSTR_SEARCH_ROM & 0xff, MP_QSTR_SEARCH_ROM >> 8, 
    0x22, 0x80, 0x55, 
    0x16, MP_QSTR_MATCH_ROM & 0xff, MP_QSTR_MATCH_ROM >> 8, 
    0x22, 0x81, 0x4c, 
    0x16, MP_QSTR_SKIP_ROM & 0xff, MP_QSTR_SKIP_ROM >> 8, 
    0x32, 0x00, 
    0x16, MP_QSTR___init__ & 0xff, MP_QSTR___init__ >> 8, 
    0x50, 
    0x2a, 0x01, 
    0x53, 
    0x33, 0x01, 
    0x16, MP_QSTR_reset & 0xff, MP_QSTR_reset >> 8, 
    0x32, 0x02, 
    0x16, MP_QSTR_readbit & 0xff, MP_QSTR_readbit >> 8, 
    0x32, 0x03, 
    0x16, MP_QSTR_readbyte & 0xff, MP_QSTR_readbyte >> 8, 
    0x32, 0x04, 
    0x16, MP_QSTR_readinto & 0xff, MP_QSTR_readinto >> 8, 
    0x32, 0x05, 
    0x16, MP_QSTR_writebit & 0xff, MP_QSTR_writebit >> 8, 
    0x32, 0x06, 
    0x16, MP_QSTR_writebyte & 0xff, MP_QSTR_writebyte >> 8, 
    0x32, 0x07, 
    0x16, MP_QSTR_write & 0xff, MP_QSTR_write >> 8, 
    0x32, 0x08, 
    0x16, MP_QSTR_select_rom & 0xff, MP_QSTR_select_rom >> 8, 
    0x32, 0x09, 
    0x16, MP_QSTR_scan & 0xff, MP_QSTR_scan >> 8, 
    0x32, 0x0a, 
    0x16, MP_QSTR__search_rom & 0xff, MP_QSTR__search_rom >> 8, 
    0x32, 0x0b, 
    0x16, MP_QSTR_crc8 & 0xff, MP_QSTR_crc8 >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt__OneWire[12] = {
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire___init__),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_reset),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_readbit),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_readbyte),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_readinto),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_writebit),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_writebyte),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_write),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_select_rom),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_scan),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire__search_rom),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire_crc8),
};
STATIC const mp_raw_code_t raw_code_onewire__lt_module_gt__OneWire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire__lt_module_gt__OneWire,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt__OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 126,
    .n_obj = 0,
    .n_raw_code = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR_OneWire,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt__OneWire + 6,
        .opcodes = fun_data_onewire__lt_module_gt__OneWire + 30,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// frozen bytecode for file onewire.py, scope onewire_<module>
STATIC const byte fun_data_onewire__lt_module_gt_[46] = {
    0x18, 0x12,
    MP_QSTR__lt_module_gt_ & 0xff, MP_QSTR__lt_module_gt_ >> 8,
    MP_QSTR_onewire_dot_py & 0xff, MP_QSTR_onewire_dot_py >> 8,
    0x60, 0x68, 0x6e, 0x20, 0x00,
    0x80, 
    0x51, 
    0x1b, MP_QSTR__onewire & 0xff, MP_QSTR__onewire >> 8, 
    0x16, MP_QSTR__ow & 0xff, MP_QSTR__ow >> 8, 
    0x54, 
    0x32, 0x00, 
    0x10, MP_QSTR_OneWireError & 0xff, MP_QSTR_OneWireError >> 8, 
    0x11, MP_QSTR_Exception & 0xff, MP_QSTR_Exception >> 8, 
    0x34, 0x03, 
    0x16, MP_QSTR_OneWireError & 0xff, MP_QSTR_OneWireError >> 8, 
    0x54, 
    0x32, 0x01, 
    0x10, MP_QSTR_OneWire & 0xff, MP_QSTR_OneWire >> 8, 
    0x34, 0x02, 
    0x16, MP_QSTR_OneWire & 0xff, MP_QSTR_OneWire >> 8, 
    0x51, 
    0x63, 
};
STATIC const mp_rom_obj_t const_table_data_onewire__lt_module_gt_[2] = {
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWireError),
    MP_ROM_PTR(&raw_code_onewire__lt_module_gt__OneWire),
};
const mp_raw_code_t raw_code_onewire__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire__lt_module_gt_,
    .const_table = (mp_uint_t*)const_table_data_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 46,
    .n_obj = 0,
    .n_raw_code = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name = MP_QSTR__lt_module_gt_,
        .qstr_source_file = MP_QSTR_onewire_dot_py,
        .line_info = fun_data_onewire__lt_module_gt_ + 6,
        .opcodes = fun_data_onewire__lt_module_gt_ + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    .n_qstr = 0,
    .qstr_link = NULL,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

const char mp_frozen_mpy_names[] = {
"uasyncio/__init__.py\0"
"uasyncio/core.py\0"
"uasyncio/event.py\0"
"uasyncio/funcs.py\0"
"uasyncio/lock.py\0"
"uasyncio/stream.py\0"
"dht.py\0"
"lcd160cr.py\0"
"lcd160cr_test.py\0"
"onewire.py\0"
"\0"};
const mp_raw_code_t *const mp_frozen_mpy_content[] = {
    &raw_code_uasyncio___init____lt_module_gt_,
    &raw_code_uasyncio_core__lt_module_gt_,
    &raw_code_uasyncio_event__lt_module_gt_,
    &raw_code_uasyncio_funcs__lt_module_gt_,
    &raw_code_uasyncio_lock__lt_module_gt_,
    &raw_code_uasyncio_stream__lt_module_gt_,
    &raw_code_dht__lt_module_gt_,
    &raw_code_lcd160cr__lt_module_gt_,
    &raw_code_lcd160cr_test__lt_module_gt_,
    &raw_code_onewire__lt_module_gt_,
};
#ifdef MICROPY_FROZEN_LIST_ITEM
MICROPY_FROZEN_LIST_ITEM("uasyncio", "uasyncio/__init__.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/core", "uasyncio/core.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/event", "uasyncio/event.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/funcs", "uasyncio/funcs.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/lock", "uasyncio/lock.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/stream", "uasyncio/stream.py")
MICROPY_FROZEN_LIST_ITEM("dht", "dht.py")
MICROPY_FROZEN_LIST_ITEM("lcd160cr", "lcd160cr.py")
MICROPY_FROZEN_LIST_ITEM("lcd160cr_test", "lcd160cr_test.py")
MICROPY_FROZEN_LIST_ITEM("onewire", "onewire.py")
#endif
