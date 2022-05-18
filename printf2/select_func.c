#include "main.h"

int (*select_func(char c))(va_list)
{
	switch (c)
	{
	case 'c':
		return (print_char);
		break;
	case 's':
		return (print_str);
		break;
	case '%':
		return (print_percent);
		break;
	default:
		return (NULL);
		break;
	}

	return (0);
}
