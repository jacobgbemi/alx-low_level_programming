#include "main.h"
/*
* Auth: Gbemi Jacob Adebayo
*/

/**
 * _strncpy - a function that copies n bytes of a source into
 * buffer of a destination string.
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
