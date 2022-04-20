/*
* Auth: Gbemi Jacob Adebayo
 */

#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	int a_int = *a;
	*a = *b;
	*b = a_int;
}
