#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: the given string to be searched for set of bytes
 * @accept: whole string of bytes of which @s is to be searched for
 * matching set of bytes
 *
 * Return: a pointer to the byte in s that matches one the bytes
 * in accept, or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	/* initialize counter i */
	int i;

	/* loop through @s */
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		/* increment s */
		s++;

	}

	return ('\0');
}
