#include "main.h"

char _putchar(char c)
{
	return write(1, &c, 1);
}


int print_char(va_list ap)
{
	char c = va_arg(ap, int);
	return _putchar(c);
       /* char *s;
	char c;

	c = va_arg(ap, int);

	if (c == 0)
		c = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';
	
	return (s); 
	*/
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

int print_percent(va_list ap)
{
	if (va_arg(ap, int) == '%')
		return _putchar('%');
	return (0);

}
