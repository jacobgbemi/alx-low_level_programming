#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char * const format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int (*select_func(char c)(va_list));

#endif
