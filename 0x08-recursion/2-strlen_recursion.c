#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string whose length is to be determined
 *
 * Return: the determined length of string
 */

int _strlen_recursion(char *s)
{
	/* set counter i */
	int i = 0;

	/* loop through using if */
	if (*s)
	{
		/* increment i */
		i++;

		/* recursively call function and increment poiter position */
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
