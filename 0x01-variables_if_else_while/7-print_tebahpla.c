/* Auth: Gbemi Jacob Adebayo
 */

#include <stdio.h>

/**
 * main - Function to print the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
