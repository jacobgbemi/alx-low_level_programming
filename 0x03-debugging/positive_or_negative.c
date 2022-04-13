#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/*
 * Auth: Gbemi Jacob Adebayo
 */

/**
 * positive_or_negative - print if a number is postive or negative
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
