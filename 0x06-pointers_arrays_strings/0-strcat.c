#include "main.h"
/*
* Auth: Gbemi Jacob Adebayo
*/

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (temp);
}
