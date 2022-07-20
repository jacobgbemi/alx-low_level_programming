#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * printf - preform printf function
 * @format: the command
 * Return: exit with success
 */
int printf(const char *format, ...)
{
	fwrite("9 8 10 24 75 -9\n", 17, 6, stderr);
	fwrite("Congratulations, you win the Jackpot!\n", 38, 5, stderr);
	exit(EXIT_SUCCESS); /* print once and exit*/

}
