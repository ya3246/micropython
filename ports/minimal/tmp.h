/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// *FORMAT-OFF*

#include "py/mpconfig.h"

// All the qstr definitions in this file are available as constants.
// That is, they are in ROM and you can reference them simply as MP_QSTR_xxxx.

// qstr configuration passed to makeqstrdata.py of the form QCFG(key, value)
QCFG(BYTES_IN_LEN, MICROPY_QSTR_BYTES_IN_LEN)
QCFG(BYTES_IN_HASH, MICROPY_QSTR_BYTES_IN_HASH)

"Q()"
"Q(*)"
"Q(_)"
"Q(/)"
#if MICROPY_PY_BUILTINS_STR_OP_MODULO
"Q(%#o)"
"Q(%#x)"
#else
"Q({:#o})"
"Q({:#x})"
#endif
"Q({:#b})"
"Q( )"
"Q(\n)"
"Q(maximum recursion depth exceeded)"
"Q(<module>)"
"Q(<lambda>)"
"Q(<listcomp>)"
"Q(<dictcomp>)"
"Q(<setcomp>)"
"Q(<genexpr>)"
"Q(<string>)"
"Q(<stdin>)"
"Q(utf-8)"

#if MICROPY_ENABLE_PYSTACK
"Q(pystack exhausted)"
#endif
// qstrs specific to this port
// *FORMAT-OFF*
"Q(ArithmeticError)"

"Q(ArithmeticError)"

"Q(AssertionError)"

"Q(AssertionError)"

"Q(AssertionError)"

"Q(AttributeError)"

"Q(AttributeError)"

"Q(BaseException)"

"Q(BaseException)"

"Q(BytesIO)"

"Q(BytesIO)"

"Q(EOFError)"

"Q(EOFError)"

"Q(Ellipsis)"

"Q(Ellipsis)"

"Q(Exception)"

"Q(Exception)"

"Q(GeneratorExit)"

"Q(GeneratorExit)"

"Q(IOBase)"

"Q(IOBase)"

"Q(ImportError)"

"Q(ImportError)"

"Q(IndentationError)"

"Q(IndentationError)"

"Q(IndexError)"

"Q(IndexError)"

"Q(KeyError)"

"Q(KeyError)"

"Q(KeyboardInterrupt)"

"Q(KeyboardInterrupt)"

"Q(LookupError)"

"Q(LookupError)"

"Q(MemoryError)"

"Q(MemoryError)"

"Q(NameError)"

"Q(NameError)"

"Q(NoneType)"

"Q(NotImplementedError)"

"Q(NotImplementedError)"

"Q(OSError)"

"Q(OSError)"

"Q(OverflowError)"

"Q(OverflowError)"

"Q(RuntimeError)"

"Q(RuntimeError)"

"Q(StopIteration)"

"Q(StopIteration)"

"Q(StringIO)"

"Q(StringIO)"

"Q(SyntaxError)"

"Q(SyntaxError)"

"Q(SystemExit)"

"Q(SystemExit)"

"Q(TextIOWrapper)"

"Q(TypeError)"

"Q(TypeError)"

"Q(ValueError)"

"Q(ValueError)"

"Q(VfsFat)"

"Q(VfsFat)"

"Q(ZeroDivisionError)"

"Q(ZeroDivisionError)"

"Q(_0x0a_)"

"Q(__add__)"

"Q(__bool__)"

"Q(__build_class__)"

"Q(__call__)"

"Q(__class__)"

"Q(__class__)"

"Q(__class__)"

"Q(__class__)"

"Q(__class__)"

"Q(__contains__)"

"Q(__del__)"

"Q(__delitem__)"

"Q(__delitem__)"

"Q(__enter__)"

"Q(__enter__)"

"Q(__enter__)"

"Q(__eq__)"

"Q(__eq__)"

"Q(__exit__)"

"Q(__exit__)"

"Q(__exit__)"

"Q(__ge__)"

"Q(__getattr__)"

"Q(__getattr__)"

"Q(__getitem__)"

"Q(__getitem__)"

"Q(__getitem__)"

"Q(__getitem__)"

"Q(__gt__)"

"Q(__hash__)"

"Q(__iadd__)"

"Q(__import__)"

"Q(__init__)"

"Q(__init__)"

"Q(__int__)"

"Q(__isub__)"

"Q(__iter__)"

"Q(__le__)"

"Q(__len__)"

"Q(__lt__)"

"Q(__main__)"

"Q(__main__)"

"Q(__main__)"

"Q(__module__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__name__)"

"Q(__ne__)"

"Q(__new__)"

"Q(__new__)"

"Q(__next__)"

"Q(__next__)"

"Q(__next__)"

"Q(__next__)"

"Q(__path__)"

"Q(__path__)"

"Q(__path__)"

"Q(__qualname__)"

"Q(__repl_print__)"

"Q(__repl_print__)"

"Q(__repr__)"

"Q(__repr__)"

"Q(__setitem__)"

"Q(__setitem__)"

"Q(__str__)"

"Q(__sub__)"

"Q(__traceback__)"

"Q(_brace_open__colon__hash_b_brace_close_)"

"Q(_brace_open__colon__hash_o_brace_close_)"

"Q(_brace_open__colon__hash_x_brace_close_)"

"Q(_lt_dictcomp_gt_)"

"Q(_lt_dictcomp_gt_)"

"Q(_lt_genexpr_gt_)"

"Q(_lt_genexpr_gt_)"

"Q(_lt_lambda_gt_)"

"Q(_lt_lambda_gt_)"

"Q(_lt_listcomp_gt_)"

"Q(_lt_listcomp_gt_)"

"Q(_lt_module_gt_)"

"Q(_lt_module_gt_)"

"Q(_lt_setcomp_gt_)"

"Q(_lt_setcomp_gt_)"

"Q(_lt_string_gt_)"

"Q(_slash_)"

"Q(_slash_)"

"Q(_slash_)"

"Q(_slash_)"

"Q(_slash_)"

"Q(_space_)"

"Q(_star_)"

"Q(_star_)"

"Q(abs)"

"Q(all)"

"Q(any)"

"Q(append)"

"Q(append)"

"Q(append)"

"Q(args)"

"Q(bin)"

"Q(bool)"

"Q(bool)"

"Q(bound_method)"

"Q(buffering)"

"Q(builtins)"

"Q(builtins)"

"Q(bytearray)"

"Q(bytecode)"

"Q(bytes)"

"Q(bytes)"

"Q(callable)"

"Q(chdir)"

"Q(chdir)"

"Q(chdir)"

"Q(chdir)"

"Q(chr)"

"Q(classmethod)"

"Q(classmethod)"

"Q(clear)"

"Q(clear)"

"Q(close)"

"Q(close)"

"Q(close)"

"Q(close)"

"Q(closure)"

"Q(const)"

"Q(copy)"

"Q(copy)"

"Q(count)"

"Q(count)"

"Q(count)"

"Q(deque)"

"Q(dict)"

"Q(dict)"

"Q(dict_view)"

"Q(dir)"

"Q(divmod)"

"Q(encoding)"

"Q(encoding)"

"Q(end)"

"Q(endswith)"

"Q(errno)"

"Q(errno)"

"Q(eval)"

"Q(exec)"

"Q(extend)"

"Q(extend)"

"Q(file)"

"Q(file)"

"Q(find)"

"Q(flush)"

"Q(flush)"

"Q(format)"

"Q(from_bytes)"

"Q(function)"

"Q(function)"

"Q(function)"

"Q(function)"

"Q(function)"

"Q(function)"

"Q(function)"

"Q(generator)"

"Q(generator)"

"Q(get)"

"Q(getattr)"

"Q(getcwd)"

"Q(getcwd)"

"Q(getenv)"

"Q(getenv)"

"Q(getvalue)"

"Q(globals)"

"Q(hasattr)"

"Q(hash)"

"Q(hex)"

"Q(id)"

"Q(ilistdir)"

"Q(ilistdir)"

"Q(ilistdir)"

"Q(ilistdir)"

"Q(ilistdir)"

"Q(index)"

"Q(index)"

"Q(index)"

"Q(insert)"

"Q(int)"

"Q(int)"

"Q(ioctl)"

"Q(ioctl)"

"Q(isalpha)"

"Q(isdigit)"

"Q(isinstance)"

"Q(islower)"

"Q(isspace)"

"Q(issubclass)"

"Q(isupper)"

"Q(items)"

"Q(iter)"

"Q(iterator)"

"Q(iterator)"

"Q(iterator)"

"Q(iterator)"

"Q(iterator)"

"Q(join)"

"Q(key)"

"Q(keys)"

"Q(keys)"

"Q(len)"

"Q(list)"

"Q(list)"

"Q(listdir)"

"Q(little)"

"Q(little)"

"Q(locals)"

"Q(lower)"

"Q(lstrip)"

"Q(map)"

"Q(map)"

"Q(micropython)"

"Q(micropython)"

"Q(micropython)"

"Q(mkdir)"

"Q(mkdir)"

"Q(mkdir)"

"Q(mkdir)"

"Q(mkfs)"

"Q(mkfs)"

"Q(mode)"

"Q(mode)"

"Q(module)"

"Q(mount)"

"Q(mount)"

"Q(mount)"

"Q(mount)"

"Q(namedtuple)"

"Q(next)"

"Q(object)"

"Q(object)"

"Q(oct)"

"Q(open)"

"Q(open)"

"Q(open)"

"Q(open)"

"Q(opt_level)"

"Q(ord)"

"Q(pend_throw)"

"Q(pop)"

"Q(pop)"

"Q(popitem)"

"Q(popleft)"

"Q(pow)"

"Q(print)"

"Q(putenv)"

"Q(putenv)"

"Q(r)"

"Q(r)"

"Q(range)"

"Q(range)"

"Q(range)"

"Q(read)"

"Q(read)"

"Q(readblocks)"

"Q(readinto)"

"Q(readinto)"

"Q(readinto)"

"Q(readline)"

"Q(readline)"

"Q(readlines)"

"Q(readonly)"

"Q(remove)"

"Q(remove)"

"Q(remove)"

"Q(remove)"

"Q(remove)"

"Q(rename)"

"Q(rename)"

"Q(rename)"

"Q(rename)"

"Q(replace)"

"Q(repr)"

"Q(reverse)"

"Q(reverse)"

"Q(rfind)"

"Q(rindex)"

"Q(rmdir)"

"Q(rmdir)"

"Q(rmdir)"

"Q(rmdir)"

"Q(round)"

"Q(rsplit)"

"Q(rstrip)"

"Q(seek)"

"Q(seek)"

"Q(send)"

"Q(send)"

"Q(sep)"

"Q(sep)"

"Q(setattr)"

"Q(setdefault)"

"Q(sort)"

"Q(sorted)"

"Q(split)"

"Q(start)"

"Q(startswith)"

"Q(stat)"

"Q(stat)"

"Q(stat)"

"Q(stat)"

"Q(stat)"

"Q(staticmethod)"

"Q(staticmethod)"

"Q(statvfs)"

"Q(statvfs)"

"Q(statvfs)"

"Q(step)"

"Q(stop)"

"Q(str)"

"Q(str)"

"Q(strip)"

"Q(sum)"

"Q(super)"

"Q(super)"

"Q(super)"

"Q(sync)"

"Q(system)"

"Q(system)"

"Q(tell)"

"Q(tell)"

"Q(throw)"

"Q(throw)"

"Q(to_bytes)"

"Q(tuple)"

"Q(tuple)"

"Q(type)"

"Q(type)"

"Q(ucollections)"

"Q(uio)"

"Q(umount)"

"Q(umount)"

"Q(umount)"

"Q(unlink)"

"Q(unsetenv)"

"Q(unsetenv)"

"Q(uos)"

"Q(uos_vfs)"

"Q(update)"

"Q(upper)"

"Q(value)"

"Q(values)"

"Q(write)"

"Q(write)"

"Q(write)"

"Q(writeblocks)"

"Q(zip)"

"Q(zip)"
