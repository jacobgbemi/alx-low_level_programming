#include "main.h"

int _printf(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);


	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				print_char(ap);
				i++;

			}
			else if (format[i + 1] == 's')
			{
				print_str(ap);
				i++;
			}
			else if (format[i + 1] == '%')
				_putchar('%');

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
