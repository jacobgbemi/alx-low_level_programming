#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

char _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_percent(va_list ap);
int (*select_func(char c))(va_list);


typedef struct function
{
	char *op;
	char* (*func)(va_list);
} functions;

#endif
