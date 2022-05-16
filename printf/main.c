#include "3-main.h"

int main(void)
{
	puts("Hello world from C!\r\n");
	myprintf("Formatted %% %c %s\r\n", 'a', 'string');
	myprintf("Formatted %d %i %p %x %o %hd %hi %hu %hd\r\n", 1234, -5678, 0xdead, 0xbeef, 012345, (short)27, (short)-42, (unsigned char)20, (signed char)10);
	printf(" %li %lx %ld %llx\r\n", -1000000001, 0xdeadbeeful, 1020030040011, 0xdeadbeeffeeddaedull);
	return (0);
}
