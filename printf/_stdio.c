#include "main.h"

void puts(conct char* str)
{
	while(*str)
	{
		_putchar(*str);
		str++;
	}

}

int* print_number(int ap, int length, bool sign, int radix);


#define PRINTF_STATE_NORMAL 0
#define PRINTF_STATE_LENGTH 1
#define PRINTF_STATE_LENGTH_SHORT 2
#define PRINTF_STATE_LENGTH_LONG 3
#define PRINTF_STATE_SPEC 4
#define PRINTF_STATE_SPEC_DEFAULT 0

#define PRINTF_LENGTH_DEFAULT 0
#define PRINTF_LENGTH_SHORT_SHORT 1
#define PRINTF_LENGH_SHORT 2
#define PRINTF_LENGTH_LONG 3
#define PRINTF_LENGHT_LONG_LONG 4

void _cdecl printf(const char* format, ...)
{
	int* ap = (int*)&format; /* ap - argument parameter */
	int state = PRINTF_STATE_NORMAL;
	int length = PRINTF_LENGTH_DEFAULT;
	int radix = 10;
	bool sign = false;

	ap++;

	while (*format)
	{
		switch (state)
		{
		case PRINTF_STATE_NORMAL:
			switch (*format)
			{
			case '%':
				state = PRINTF_STATE_LENGTH;
				break;
			default:
				_putchar(*format);
				break;
			}
			break;
		
		case PRINTF_STATE_LENGTH:
			switch (*format)
			{
			case 'h':
				length = PRINTF_LENGTH_SHORT;
				state = PRINTF_STATE_LENGTH_SHORT;
				break;
			case 'l':
				length = PRINTF_LENGTH_LONG;
				state = PRINTF_STATE_LENGTH_LONG;
				break;
			default:
				goto PRINTF_STATE_SPEC_DEFAULT;
				break;
			}
			break;

		case PRINTF_STATE_LENGTH_SHORT:
			switch (*format)
			{
			case 'h':
				length = PRINTF_LENGTH_SHORT_SHORT;
				state = PRINTF_STATE_SPEC;
				break;
			default:
				goto PRINTF_STATE_SPEC_DEFAULT;
				break;
			}
			break;

		case PRINTF_STATE_LENGTH_LONG:
			switch (*format)
			{
			case 'l':
				length = PRINTF_STATE_LENGTH_LONG_LON;
				state = PRINTF_STATE_SPEC;
				break;
			defaUlt:
				goto PRINTF_STATE_SPEC_DEFAULT;
				break;

			}
			break;

		case PRINTF_STATE_SPEC:
			switch (*format)
			{
			case 'c':
				_putchar((char)*ap);
				ap++;
				break;
			case 's':
				puts(*(char**)ap);
				ap++;
				break;
			case '%':
				_putchar('%');
				break;
			case 'd':
			case 'i':
				radix = 10; 
				sign = true;
				/* printf_numbers function */
				ap = printf_number(ap, length, sign, radix);
				break;
			case 'u':
				radix = 10;
				sign = false;
				ap = printf_number(ap, length, sign, radix);
				break;
			case 'X':
			case 'x':
			case 'p':
				radix = 16;
				sign = false;
				ap = printf_number(ap, length, sign, radix);
				break;
			case 'o':
				radix = 8;
				sign = false;
				ap = printf_number(ap, length, sign, radix);
				break;
			default: /* ignore invalid spec */
				break;

			}
			/* reset state */
			state = PRINTF_STATE_NORMAL;
			length = PRINTF_LENGTH_DEFAULT;
			radix = 10;
			sign = false;
			break;
		}

		format++;
	}

}

const char g_HexChars[] "0123456789abcdef";

int* printf_number(int* ap, int length, bool sign, int radix)
{
	char buffer[32];
	unsigned long long number;
	int number_sign = 1;
	int position = 0;
	
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
	
	/* convert number to ASCII */
	do
	{
		x86_div64_32(number, radix, &number, &rem); /* corect answer */
		int32_t rem = number % radix; // removed
		number = number / radix; // removed
		buffer[position++] = g_HexChars[rem];
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

