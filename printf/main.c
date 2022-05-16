#include "3-main.h"

int main(void)
{
	myprintf("Hello world from C!\n");
	myprintf("Formatted %% %c\n", 'a');
	printf("Formatted %% %c %s\n", 'string');
	myprintf("Formatted %d \n", 1234);
	myprintf("Formatted %i \n", -5678);
	myprintf("Formatted %p \n", 0xdead);
	myprintf("Formatted %x \n", 0xbeef);
	myprintf("Formatted %o \n", 012345);
	myprintf("Formatted %hd \n", (short)27);
	myprintf("Formatted %hi \n", (short)-42);
	myprintf("Formatted %hu \n", (unsigned char)20);
	myprintf("Formatted %hd\n", (signed char)10);
	printf(" %li \n", -1000000001);
	printf(" %lx \n", 0xdeadbeeful);
	printf(" %ld \n", 1020030040011);
	printf(" %llx\n", 0xdeadbeeffeeddaedull);
	return (0);
}
