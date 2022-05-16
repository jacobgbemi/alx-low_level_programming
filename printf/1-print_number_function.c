#include "3-main.h"

/**
 * printf_number - function to print number argument passed into it
 * @ap: the argument parameter
 * @length: length of the data-type
 * @sign: sign of the argument
 * @radix: base of the number
 * Return: return the format string/number
 */



int *printf_number(int *ap, int length, bool sign, int radix)
{
	static char buffer[50];
	static char Representation[] = "0123456789ABCDEF";
	unsigned long number;
	int position = 0;
	int number_sign = 1;
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	
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
			number = (long int)n;
		}
		else
		{
			number = *(unsigned long int*)ap;
		}
		ap += 2;
		break;

	case PRINTF_LENGTH_LONG_LONG:
		if (sign)
		{
			long int n = *(long int*)ap;
			if (n < 0)
			{
				n = -n;
				number_sign = -1;
			}
			number = (long int)n;
		}
		else
		{
			number = *(unsigned long int*)ap;
		}
		ap += 4;
		break;

	default:
		break;
	}
	
	/* convert number to ASCII (string) */
	do {
		*--ptr = Representation[number % radix];
		number /= radix;		

	} while (number != 0); 

	/* add sign */
	if (sign && number_sign < 0)
	{
		buffer[position++] = '-';
	}

	/* print number in reverse order */
	while (--position >= 0)
		_putchar(buffer[position]);

	return (ap);

} 
