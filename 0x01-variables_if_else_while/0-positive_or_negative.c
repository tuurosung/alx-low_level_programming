#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determine if number is positive, negative or zero
 *
 * Description: when main is called, this program
 * returns whether a random number generated is positive
 * negative or is zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n >0)
	{
		printf("%i is positive\n",n);
	}
	else if(n == 0)
	{
		printf("%i is zero\n",n);
	}
	else if(n <0)
	{
		printf("%i is negative\n",n);
	}


	return (0);
}
