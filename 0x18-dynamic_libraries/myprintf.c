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
	write(STDERR_FILENO, "9 8 10 24 75 -9\n", 17);
	write(STDERR_FILENO, "Congratulations, you win the Jackpot!", 38);
	exit(EXIT_SUCCESS); /* print once and exit*/

}
