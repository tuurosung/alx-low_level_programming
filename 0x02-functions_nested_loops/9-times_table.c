#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 *
 * Description: when called, the main function returns
 * print 9 times table from 0
 *
 */
void times_table(void)
{
	int number, multiplier, product;

	for (number = 0; number <= 9; number++)
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
