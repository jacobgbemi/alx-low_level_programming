#include "main.h"

int _printf(const char * const format, ...)
{
	va_list ap;
	int i, k;
	char *str;

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				i++;

			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(ap, char*);
				k = 0;

				while (str[k] != '\0')
				{
					_putchar(str[k]);
					k++;
				}
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
