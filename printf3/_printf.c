#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	char *str, *buffer;
	int i = 0, len = 0, total = 0;
 	char* (*f)(va_list ap);

	buffer = string_buffer();
	if (buffer == NULL)
		return (-1);

	if (format == NULL)
		return (-1);

	va_start(ap, format);


	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			len = buffer_overflow(buffer, len);
			buffer[len] = format[i];
			len++; i++;
			total++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(ap);
				free(buffer);
				return (-1);
			}
			
			if (format[i] == '%')
			{
				len = buffer_overflow(buffer, len);
				buffer[len] = format[i];
				len++;
				total++;
			}
			else
			{
				f = select_func(format[i]);
				if (f == NULL)
				{
					len = buffer_overflow(buffer, len);
					buffer[len] = '%';
					total++;
					buffer[len] = format[i];
					total++;
				}
				else
				{
					str = f(ap);
					if (str == NULL)
					{
						va_end(ap);
						free(buffer);
						return (-1);
					}

					if (format[i] == 'c' && str[0] == '\0')
					{
						len = buffer_overflow(buffer, len);
						buffer[len] = '\0';
						len++;
						total++;
					}

					while (*str++)
					{
						len = buffer_overflow(buffer, len);
						buffer[len] = format[i++];
						len++;
						total++;
					}
					free(str);
				}
			}
			i++;
		}

	}

	realloc_buffer(buffer, len);
	va_end(ap);

	return (total);
}
