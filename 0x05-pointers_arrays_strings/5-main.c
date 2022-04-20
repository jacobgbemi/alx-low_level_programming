#include "main.h"
#include <stdio.h>
/*
 * Auth: Gbemi Jacob Adebayo
 */

/**
 * main - check the code for me.
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
