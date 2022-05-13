#include <stdarg.h>
#include <string.h>
#include <stdio.h>

void _printf(char *format, ...)
{
	int num_ap = strlen(format), i = 0;
	va_list ap; /* ap - argument parameters */

	va_start(ap, format);

	for (i = 0; i < num_ap; i++)
	{
		if (format[i] == 'd')
		{
			int x = va_arg(ap, int);

			printf("%d\n", x);
		}
		else if (format[i] == 'f')
		{
			double x = va_arg(ap, double);

			printf("%f\n", x);
		}
	}

	va_end(ap);

}

int main(void)
{
	_printf("dfd", 3, 2.2, 4);
	_printf("fdf", 3.3, 2, 4.4);

	return (0);
}
