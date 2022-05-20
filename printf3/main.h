#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

/*int _putchar(char c);*/
int _printf(const char *format, ...);
char *print_char(va_list ap);
char *print_str(va_list ap);
char *_strcpy(char *dest, char *src);
char* (*select_func(char c))(va_list);
char *string_buffer(void);
void realloc_buffer(char *buffer, int len);
int buffer_overflow(char *buffer, int pos);


typedef struct function
{
	char op;
	char* (*func)(va_list);
} functn_t;

#endif
