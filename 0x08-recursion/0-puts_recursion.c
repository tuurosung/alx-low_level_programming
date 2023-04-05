#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: pointer to the string to be printed
 *
 */

void _puts_recursion(char *s)
{
	/* check if the string is not empty */
	if (*s)
	{
		_putchar(*s);

		/* recursively call the function itself, +1 to loop pointer */
		_puts_recursion(s + 1);
	}

	/* if its the end of the line */
	else
		_putchar('\n');
}
