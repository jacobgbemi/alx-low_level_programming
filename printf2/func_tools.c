#include "main.h"

int _putchar(char c)
{
	return write(1, &c, 1);
}


int print_char(va_list ap)
{
	int c = va_arg(ap, int);
	return _putchar(c);
}


int print_str(va_list ap)
{
	int k = 0;

	char *str = va_arg(ap, char*);

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}

	return (0);
}


