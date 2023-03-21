#include "main.h"

/**
 * main - Program prints alphabets in lower case
 *
 * Description: when called, the main function returns
 * all lowercase alphabets followed by a new line
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char c;

	for (c ='a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
