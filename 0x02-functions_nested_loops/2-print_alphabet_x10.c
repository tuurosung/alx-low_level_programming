#include "main.h"

/**
 * print_alphabet_x10 - Program prints alphabets in lower case 10x
 *
 * Description: when called, the main function returns
 * all lowercase alphabets tentimes followed by a new line
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
	}
}
