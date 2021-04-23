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

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

#include "py/mpstate.h"
#include "py/mphal.h"
#include "input.h"

#if MICROPY_USE_READLINE == 1
#include "lib/mp-readline/readline.h"
#endif

char *strjoin(char *str1,char *sp,char *str2){
    int len = strlen(str1) + strlen(sp) + strlen(str2) + 1;
    char *str3 = (char *)calloc(len,sizeof(char));
    if(str3 == NULL)return str3;
    strcat(str3,str1);
    strcat(str3,sp);
    strcat(str3,str2);
    return str3;
}

#if MICROPY_USE_READLINE == 0
char *prompt(char *p) {
    // simple read string
    static char buf[256];
    printf("%s",p);
    if(cgetstring(buf,sizeof(buf)) < 0)return NULL;
    int l = strtrim_tail(buf);
    if(l == 0)return NULL;
    char *line = malloc(l+1);
    memcpy(line, buf, l+1);
    line[l] = '\0';
    return line;
}
#endif

void prompt_read_history(void) {
    #if MICROPY_USE_READLINE_HISTORY
    #if MICROPY_USE_READLINE == 1
    readline_init0(); // will clear history pointers
    char *home = getenv("HOME");
    if (home != NULL) {
        vstr_t vstr;
        vstr_init(&vstr, 50);
        vstr_printf(&vstr, "%s/.micropython.history", home);
        int fd = open(vstr_null_terminated_str(&vstr), O_RDONLY);
        if (fd != -1) {
            vstr_reset(&vstr);
            for (;;) {
                char c;
                int sz = read(fd, &c, 1);
                if (sz < 0) {
                    if (errno == EINTR) {
                        continue;
                    }
                    break;
                }
                if (sz == 0 || c == '\n') {
                    readline_push_history(vstr_null_terminated_str(&vstr));
                    if (sz == 0) {
                        break;
                    }
                    vstr_reset(&vstr);
                } else {
                    vstr_add_byte(&vstr, c);
                }
            }
            close(fd);
        }
        vstr_clear(&vstr);
    }
    #endif
    #endif
}

void prompt_write_history(void) {
    #if MICROPY_USE_READLINE_HISTORY
    #if MICROPY_USE_READLINE == 1
    char *home = getenv("HOME");
    if (home != NULL) {
        vstr_t vstr;
        vstr_init(&vstr, 50);
        vstr_printf(&vstr, "%s/.micropython.history", home);
        int fd = open(vstr_null_terminated_str(&vstr), O_CREAT | O_TRUNC | O_WRONLY, 0644);
        if (fd != -1) {
            for (int i = MP_ARRAY_SIZE(MP_STATE_PORT(readline_hist)) - 1; i >= 0; i--) {
                const char *line = MP_STATE_PORT(readline_hist)[i];
                if (line != NULL) {
                    while (write(fd, line, strlen(line)) == -1 && errno == EINTR) {
                    }
                    while (write(fd, "\n", 1) == -1 && errno == EINTR) {
                    }
                }
            }
            close(fd);
        }
    }
    #endif
    #endif
}
