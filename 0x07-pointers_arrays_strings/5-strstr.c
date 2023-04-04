#include "main.h"

/**
 * _strstr - locates a substring
 * finds the first occurance of the substring needle in the string
 * haystack
 *
 * @haystack: given string to be seached for @needle
 * @needle: substring whose first occurrence is to be found
 *
 * Return: a pointer to the begginning of the located substring, or NULL if 
 * not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	/* initialize counter i */
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	else
	{
		while (*haystack)
		{
			i = 0;

			if (haystack[i] == needle[i])
			{
				do {
					if (needle[i + 1] == '\0')
					{
						return (haystack);
					}

					i++;
				} while (haystack[i] == needle[i]);
			}

			/* increment haystack */
			haystack++;
		}

		return ('\0');
	}
}
