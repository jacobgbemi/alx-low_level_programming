#include "main.h"

int _printf(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);


	while (format[i] != '\0')
	{
		if (format[i + 1] == '%')
		{
			select_func(format[i + 1])(ap);
			i++;
		}
		else
		{
			_putchar(format[i]);

		}
		i++;
	}

	va_end(ap);

	return (0);
}
