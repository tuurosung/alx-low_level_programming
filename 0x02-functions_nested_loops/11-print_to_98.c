#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: given number to start from
 *
 * Description: when called, the main function returns
 * all natural numbers from n to 98
 *
 */
void print_to_98(int n)
{
	/* for numbers greater than 98 */
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

