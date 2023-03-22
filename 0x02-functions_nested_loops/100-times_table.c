#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 *
 * @n: number of times table to be iterated
 *
 * Description: when called, the main function returns
 * print n times table from 0
 *
 */
void print_times_table(int n)
{
	int number;
	int multiplier;
	int product;

	if (number >= 0 && number <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multiplier = 1; multiplier <= 9; multiplier++)
			{
				_putchar(',');
				_putchar(' ');

				product = number * multiplier;

				if (product <= 9)
					_putchar(' ');
				else
					_putchar((product / 10) + '0');

				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
