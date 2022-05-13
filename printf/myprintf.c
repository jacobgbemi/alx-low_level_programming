#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void my_printf(const char* format, ...)
{
	int* ap = (int*)&format;
	ap += sizeof(format) / sizeof(int);
	ap++;
}

int main()
{
	my_printf("Test %d %u %x %i", 1, 2, 3, 4);
}
