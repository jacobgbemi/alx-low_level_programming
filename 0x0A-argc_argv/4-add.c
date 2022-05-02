#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"

/**
 * is_num - iterate through each argv to test if it's a number
 * @args: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *args)
{
	int j = 0;

	for (j = 0; args[j]; j++)
	{
		if (!(args[j] >= '0' && args[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - addition of argument numbers passed to program on a line
 * @argc: argument counter
 * @argv: arguments numbers to add
 * Return: 0 on success, 1 if arguments not numbers
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
