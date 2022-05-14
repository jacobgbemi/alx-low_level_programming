#include "3-main.h"

/**
  * oct_convert - convert number argument to octal
  * @decnum: argument to convert
  * 
  * Return - the octal equivalent
  */


int *(int*)oct_convert(int decnum)
{
	int octnum = 0, temp = 1;

	while (decnum != 0)
	{
		octnum = octnum + (decnum % 8) * temp;
		decnum = decnum / 8;
		temp = temp * 10;
	}

	return (octnum);
}



/**
  * hex_convert - convert argument to hexadecimal
  * @str: the given argument
  * @hex: the equivalent hexadecimal
  * Return 0
  */

void hex_convert(char *str, char *hex)
{
	size_t i, j = 0;

	for (i = 0; i < strlen(str); i++)
	{
		sprintf(hex + j, "%02X", str[i]);
		j += 2;
	}
	hex[j] = '\0';
}


/**
 * _puts - print a string to stdout.
 * @str: The string to be printed.
 */

void _puts(const char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

























































