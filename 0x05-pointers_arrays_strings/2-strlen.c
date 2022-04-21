/*
* Auth: Gbemi Jacob Adebayo
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string to evaluate.
 *
 * Return: The length of @i.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
