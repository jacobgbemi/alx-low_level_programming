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
	int i;

	for (i = 0; s[i] != '\n'; i++)
		i++;
	return (i);
}
