#include "3-main.h"

int main(void)
{
	myprintf("Hello world from C!\n");
	myprintf("Formatted %% %c\r\n", 'a');
	myprintf("Formatted %d %i %p %x %o %hd %hi %hu %hd\n", 1234, -5678, 0xdead, 0xbeef, 012345, (short)27, (short)-42, (unsigned char)20, (signed char)10);
	/* myprintf(" %li %lx %ld %llx\r\n", (long int)-100001, ((long)size_t)0xful, 10200, (long int)0xdull); */
	return (0);
}
