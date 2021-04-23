#ifndef MICROPY_INCLUDED_UNIX_INPUT_H
#define MICROPY_INCLUDED_UNIX_INPUT_H
#include <misc/conio.h>

char *prompt(char *p);
char *strjoin(char *str1,char *sp,char *str2);
void prompt_read_history(void);
void prompt_write_history(void);

#endif // MICROPY_INCLUDED_UNIX_INPUT_H
