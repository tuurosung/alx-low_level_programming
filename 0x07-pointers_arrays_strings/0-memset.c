#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * the memset () function fills the first n bytes of the memory
 * aread pointed to by s with the constant byte b
 *
 * @s: represents pointer to the memory area to be filled by @b
 * @c: constant byte to fill the area pointed to by @s
 * @n: number of times the constant byte @b will be repeated
 *
 * Return: a pointer to the memory area si
 */

/* using the same syntax from man memset */
char *_memset(char *s, char c, unsigned int n)
{
	/* initialize a counter i */
	unsigned int i;
	char *memArea = s;

	/*for loop whilst i<n */
	for (i = 0; i < n; i++)
		memArea[i] = c;

	return (memArea);
}
