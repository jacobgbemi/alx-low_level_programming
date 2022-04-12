i/*
* Auth: Gbemi Jacob Adebayo
*/

#include "main.h"

/**
* main - print_alphabet function prototype to print in lowercase,
* followed by a new line
*
* Return: Nothing (void)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
