#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @ap: valist
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints int
 * @ap: valist
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float
 * @ap: valist
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: valist
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list ap;

	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	/* iterate format; if datatype matched, access function via struct */
	va_start(ap, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(ap); /*access va_arg later*/
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
