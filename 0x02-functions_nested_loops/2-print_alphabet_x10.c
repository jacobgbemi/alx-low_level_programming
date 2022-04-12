/*
* Auth: Gbemi Jacob Adebayo
*/

#include "main.h"

/**
* Check description 
* main - print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
* Return: Nothing
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
