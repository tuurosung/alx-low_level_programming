#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determine last digit greater/less than 5
 *
 * Description: when main is called, this program
 * returns whether the last digit of a random
 * number is greater than or less than 5
 * Return: 0
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*using modulo arithmetic*/
	j = n % 10;

	if (j > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, j);
	}


	return (0);
}
