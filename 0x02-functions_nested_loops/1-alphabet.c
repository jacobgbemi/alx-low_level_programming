/*
* Auth: Gbemi Jacob Adebayo
*/

#include "main.h"

/**
* print_alphabet - function prototype to print alphabet in lowercase,
* followed by a new line
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
