#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i++])
		len++;


	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
