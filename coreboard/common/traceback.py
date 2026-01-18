import sys
from io import StringIO


def format_tb(tb, limit):
    return ["traceback.format_tb() not implemented\n"]


def format_exception_only(type, value):
    return [repr(value) + "\n"]


def format_exception(etype, value, tb, limit=None, chain=True):
    return format_exception_only(etype, value)


def print_exception(t, e, tb, limit=None, file=None, chain=True):
    if file is None:
        file = sys.stdout
    sys.print_exception(e, file)


def print_exc(limit=None, file=None, chain=True):
    print_exception(*sys.exc_info(), limit=limit, file=file, chain=chain)


def format_exc(e, limit=None, chain=True):
    stream = StringIO()
    sys.print_exception(e, stream)
    msg = stream.getvalue()
    del stream
    return msg
    # return "".join(sys.print_exception(e, sys.stdout), limit=limit, chain=chain)

