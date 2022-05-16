#include <stdio.h>
#include <stdarg.h>

void myprintf(char *format, ...);
char *convert(unsigned int, int);

int main(void)
{
	myprintf("www.firmcodes.com \n %d", 9);

	return (0);
}

void myprintf(char *format, ...)
{
	char *traverse;
	unsigned int i;
	char *s;
	int d;

	/* Initializing Myprintf.s arguments */
	va_list arg;

	va_start(arg, format);

	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
		}
		traverse++;

		/* fetching and executing arguments */
		switch (*traverse)
		{
		case 'c': /* fetch char argument */
			i = va_arg(arg, int);
			putchar(i);
			break;
		case 'd': /* fetch decimal/integer argument */
			d = va_arg(arg, int);
			if (d < 0)
			{
				d = -d;
				putchar('-');
			}
			puts(convert(d, 10));
			break;
		case 'o': /* fetch octal representation */
			i = va_arg(arg, unsigned int);
			puts(convert(i, 8));
			break;
		case 's': /* fetch string */
			s = va_arg(arg, char *);
			puts(s);
			break;
		case 'x': /* fetch hexadecimal representation */
			i = va_arg(arg, unsigned int);
			puts(convert(i, 16));
			break;
		}


	}
	/* closing argument list to necessary clean-up */
	va_end(arg);
}

char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
