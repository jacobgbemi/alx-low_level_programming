#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of two number argument passed to program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int result = 0;
	
	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
		printf("Error");
	return (1);
}
