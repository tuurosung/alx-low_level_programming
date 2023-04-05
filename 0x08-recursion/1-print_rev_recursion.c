#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to be printed in reverse
 *
 */

void _print_rev_recursion(char *s)
{
	/* usingcheck whiles the string is valid as a loop */
	if (*s)
	{
		/* add +1 to loop to the end of the string */
		_print_rev_recursion(s + 1);

		/* print character */
		_putchar(*s);
	}
}
