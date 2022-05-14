#ifndef MAIN_H
#define MAIN_H

/**
 * Auth: Gbemi Jacob Adebayo
 * Desc: Header file containing prototypes for all the functions used
 *       used in the current tasks.
 */


/* libraries */
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>


/* length & state macros */
#define PRINTF_STATE_NORMAL 0
#define PRINTF_STATE_LENGTH 1
#define PRINTF_STATE_LENGTH_SHORT 2
#define PRINTF_STATE_LENGTH_LONG 3
#define PRINTF_STATE_SPEC 4

#define PRINTF_LENGTH_DEFAULT 0
#define PRINTF_LENGTH_SHORT_SHORT 1
#define PRINTF_LENGTH_SHORT 2
#define PRINTF_LENGTH_LONG 3
#define PRINTF_LENGTH_LONG_LONG 4

#define true 1
#define false 0


int _putchar(char c);
int *oct_convert(int decnum);
void hex_convert(char *str, char *hex);
void _puts(const char* str);
int* print_number(int ap, int length, bool sign, int radix);
void _printf(const char* format, ...);

#endif


















