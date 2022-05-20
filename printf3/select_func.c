#include "main.h"
/**
  * select_func - select and return the matched function
  * @c: argument parameter used to pick the function
  * Return: Pointer to picked function
  */

char* (*select_func(char c))(va_list)
{
	int k = 0;

	functn_t basket[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
	};

	while (basket[k].op != '\0')
	{
		if (basket[k].op == c)
			return (basket[k].func);
		k++;
	}

	return (NULL);
}
