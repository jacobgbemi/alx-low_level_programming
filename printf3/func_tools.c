#include "main.h"

/**
  * _putchar - write to stdout
  * @c: character to output
  */

int _putchar(char c)
{
	return write(1, &c, 1);
}


/**
  * _strlen - print length of string
  * @str: string passed
  * Return: length as int
  */

int _strlen(char *str)
{
	int y = 0;

	while (str[y] != '\0')
		y++;
	return (y);
}

/**
  * _strcpy - copy from one file to another
  * @dest: destination
  * @src: source
  * Return: pointer to destination
  */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (dest);
}

/**
  * print_char - print char as string
  * @ap: char to print
  * Return: string
  */

char *print_char(va_list ap)
{
	char *ptr;
	char c;
	c = va_arg(ap, int);
	if (c == 0)
		c = '\0';
	ptr = malloc(sizeof(char) * 2);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = c;
	ptr[1] = '\0';
	
	return (ptr);
	
}

/**
  * print_str - print string as string
  * @ap: string to print
  * Return: string
  */

char *print_str(va_list ap)
{
	char *ptr, *copy_string;
	int len;

	char *str = va_arg(ap, char*);

	len = _strlen(str);

	ptr = malloc(sizeof(char) * len + 1);
	copy_string = _strcpy(ptr, str);

	if (ptr == NULL)
		return (NULL);
	
	return (copy_string);
}


/**
  * print_percent - print percent symbol
  * @ap: the percent symbol
  * Return: symbol
  */
/*
char *print_percent(va_list ap)
{
	char *ptr;
	char p;

	p = va_arg(ap, int);

	if (p == 0)
		p = '\0';

	ptr = malloc(sizeof(char) * 2);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '%';
	ptr[1] = '\0';

	return (ptr);

}*/
