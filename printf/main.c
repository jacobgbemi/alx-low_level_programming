#include "stdint.h"
#include "stdio.h"

void _cdecl cstart_(uint16_t bootDrive)
{
	puts("Hello world from C!\r\n");
	printf("Formatted %% %c %s\r\n", 'a', 'string');
	printf("Formatted %d %i %p %o %hd %hi %hhu %hhd\r\n", 1234, -5678, 0xdead, 0xbeef, 012345, (short)27, (short)-42, (unsigned char)20, (signed char)10);
	printf(" %ld %lx %lld %llx\r\n", -1000000001, 0xdeadbeeful, 1020030040011, 0xdeadbeeffeeddaedull);
	for (;;);
}
