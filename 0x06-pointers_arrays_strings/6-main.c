#include "main.h"
#include <stdio.h>
/*
* Auth: Gbemi Jacob Adebayo
*/

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst.
		\"apitalize on what comes.\n
		hello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
