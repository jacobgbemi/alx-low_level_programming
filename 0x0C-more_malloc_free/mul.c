#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *argvv)
{
	int i = 0;

	for (i = 0; argvv[i]; i++)
	{
		if (!(argvv[i] >= '0' && argvv[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int result;
	int i = 1;
	int num_len = 0;
	int *ptr;

	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);
	num_len = num1 * num2;
	
	ptr = (int *)malloc(sizeof(int) * num_len);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		while (i < argc)
		{
			if (is_num(argv[i]))
			{
				result = num1 * num2;
				ptr = &result;
			}
			else
			{
				printf("Error\n");
				exit(98);
			}
			i++;
		}
	}

	printf("%d\n", *ptr);
	return (0);
}
