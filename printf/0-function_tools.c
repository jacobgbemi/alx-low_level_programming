/**
 * _puts - print a string to stdout.
 * @str: The string to be printed.
 */

void _puts(const char *str)
{
	while (*str)
		_putchar(*str);
		str++;
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

















