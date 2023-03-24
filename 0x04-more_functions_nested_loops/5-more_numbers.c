#include "main.h"

/**
 * more_numbers - print ten times number from 0 to 14
 *
 */
void more_numbers(void)
{
	int num;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{

		for (num = 0; num <= 9; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
