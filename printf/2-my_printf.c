#include "main.h"


#define PRINTF_STATE_NORMAL 0
#define PRINTF_STATE_LENGTH 1
#define PRINTF_STATE_LENGTH_SHORT 2
#define PRINTF_STATE_LENGTH_LONG 3
#define PRINTF_STATE_SPEC 4
/* #define PRINTF_STATE_SPEC_DEFAULT 0 */

#define PRINTF_LENGTH_DEFAULT 0
#define PRINTF_LENGTH_SHORT_SHORT 1
#define PRINTF_LENGH_SHORT 2
#define PRINTF_LENGTH_LONG 3
#define PRINTF_LENGHT_LONG_LONG 4

void _printf(const char* format, ...)
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
				format++;
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
				format++;
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
				format++;
				break;

			}
			break;

		case PRINTF_STATE_SPEC:
			switch (*format)
			{
			case 'c':
				_putchar((char)*ap);
				ap += 1;
				break;
			case 's':
				_puts(*(char**)ap);
				ap += 1;
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

