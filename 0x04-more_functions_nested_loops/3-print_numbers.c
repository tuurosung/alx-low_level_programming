#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * @c: character to be iterated
 *
 */
void print_numbers(void)
{
	char c;

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
