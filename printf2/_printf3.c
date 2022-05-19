#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
 	int (*f)(va_list ap);

	va_start(ap, format);


	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			if (format[i +1] == '%')
				_putchar('%');
			else
			{
				f = select_func(format[i + 1]);
				while (f != NULL)
				{
					f(ap);
					i++;
				}
			}
		}
		i++;
	}

	va_end(ap);

	return (0);
}
