#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the backslach (\) should be printed
 */
void print_diagonal(int n)
{
	int len;
	int margin;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (margin = 0; margin < len; margin++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
