/*
* Auth: Gbemi Jacob Adebayo
*/
#include <unistd.h>
#include "myheaders.h"

/**
 *  Prints "_putchar" followed by a new line.
 */

int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
