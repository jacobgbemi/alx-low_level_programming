#include "main.h"

/**
 * printf_number - function to print number argument passed into it
 * @ap: the argument parameter
 * @length: length of the data-type
 * @sign: sign of the argument
 * @radix: base of the number
 * Return: return the format string/number
 */



int* printf_number(int* ap, int length, bool sign, int radix)
{
	char buffer[100];
	unsigned long long number;
	int number_sign = 1;
	int position = 0; /* current position in the buffer   */
	
	/* process length */
	switch (length)
	{
	case PRINTF_LENGTH_SHORT_SHORT:
	case PRINTF_LENGTH_SHORT:
	case PRINTF_LENGTH_DEFAULT:
		if (sign)
		{
			int n = *ap;
			
			if (n < 0)
			{
				n = -n;
				number_sign = -1;
			}
			number = n;

		}
		else
		{
			number = *(unsigned int*)ap;
		}
		ap += 1;
		break;
	
	case PRINTF_LENGTH_LONG:
		if (sign)
		{ 
			long int n = *(long int*)ap;

			if (n < 0)
			{
				n = -n;
				number_sign = -1;

			}
			number = (unsigned long long)n;
		}
		else
		{
			number = *(unsigned long long int*)ap;
		}
		ap += 2;
		break;

	case PRINTF_LENGTH_LONG_LONG:
		if (sign)
		{
			long long int n = *(long long int*)ap;
			if (n < 0)
			{
				n = -n;
				number_sign = -1;
			}
			number = (unsigned long long)n;
		}
		else
		{
			number = *(unsigned long long int*)ap;
		}
		ap += 4;
		break;

	default:
		break;
	}
	
	/* convert number to ASCII (string) */
	do
	{	char *ptr_number;
		ptr_number = &number;
		ptr_number++;
		hex_convert(ptr_number, hexavalue);
		buffer[position++] = hexavalue;
	} while (number > 0); 

	/* add sign */
	if (sign && number_sign < 0)
	{
		buffer[position++] = '-';
	}

	/* print number in reverse order */
	while (--position >= 0)
		_putchar(buffer[position]);

	return ap;

} 
