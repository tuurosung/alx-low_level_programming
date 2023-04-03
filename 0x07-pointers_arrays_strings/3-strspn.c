#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * substring
 *
 * @s: initial string
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment @s
 * which consist only of bytes from @accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	/* initialize numBytes and counter i */
	unsigned int numBytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			/* if matching character found */
			if (*s == accept[i])
			{
				numBytes++;

				break;
			}

			else if (accept[i + 1] == '\0')
				return (numBytes);
		}

		/* increment s */
		s++;
	}

	return (numBytes);
}
