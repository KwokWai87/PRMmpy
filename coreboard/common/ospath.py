import os
import stat


sep = "/"


def normcase(s):
    return s


def normpath(s):
    return s


def abspath(s):
    if s[0] != "/":
        return os.getcwd() + "/" + s
    return s


def join(*args):
    # TODO: this is non-compliant
    if type(args[0]) is bytes:
        return b"/".join(args)
    else:
        return "/".join(args)


def split(path):
    if path == "":
        return ("", "")
    r = path.rsplit("/", 1)
    if len(r) == 1:
        return ("", path)
    head = r[0]  # .rstrip("/")
    if not head:
        head = "/"
    return (head, r[1])


def splitext(path):
    head, r = split(path)
    module_name, ext_name = r.split(".")
    return module_name, ext_name


def dirname(path):
    return split(path)[0]


def basename(path):
    return split(path)[1]


def exists(path):
    try:
        os.stat(path)
        return True
    except:
        return False
        
# TODO
lexists = exists


def isdir(path):

    try:
        mode = os.stat(path)[0]
        return stat.S_ISDIR(mode)
    except OSError:
        return False

def isfile(path):
    try:
        mode = os.stat(path)[0]
        return stat.S_ISREG(mode)
    except OSError:
        return False


def expanduser(s):
    if exists("/flash"):
        home = "/flash"
    elif exists("/sd"):
        home = "/sd"
    else:
        raise "home is not Exists"
    if s == "~" or s.startswith("~/"):

        h = home

        return h + s[1:]
    if s[0] == "~":
        # Sorry folks, follow conventions
        return home + s[1:]
    return s
