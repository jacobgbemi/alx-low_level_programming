#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, i;
	unsigned int num = 0, not_binary = 0;

	if (b == NULL)
		return (not_binary);

	while (b[len] != '\0')
		len++;
	len -= 1;


	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (not_binary);

		if (b[i] == '1')
			num += (1 * (1 << len));
		i++;
		len--;
	}

	return (num);
}
