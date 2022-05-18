#include "main.h"

int (*select_func(char c))(va_list)
{
	if (c == 'c')
		return (print_char);
	
	if (c == 's')
		return (print_str);

	return (0);
}
