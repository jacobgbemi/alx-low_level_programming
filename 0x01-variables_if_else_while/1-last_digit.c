#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Function to print the last digit of a random number
* 
* Return: End function
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5) 
	{			
		printf("Last digit of %d is %d and is greater than 5\n",n);
	}
	else if(n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and less than 6 and nt 0\n",n);
	}
	else 
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	
	return (0);
}
