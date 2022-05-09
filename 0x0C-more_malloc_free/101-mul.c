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
	long int result;
	int i = 1;
	int j = 0, len = 0;
	int *product = (int *)malloc(sizeof(size_t) * len);

	while (product[j] != '\0')
		len++, j++;
	len++;

	if (product == NULL)
	{
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
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			result = num1 * num2;
			*product = result;
			}
			else
			{
				printf("Error\n");
				exit(98);
			}
			i++;
		}
	}

	printf("%d\n", *product);
	return (0);
}
