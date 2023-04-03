#include "main.h"

/**
 * _memcpy - function that copies memory area
 * the _memcpy() function copies n bytes from memory area src
 * to memory area dest
 *
 * @dest: Pointer to a memory area where @src will be copied to
 * @src: Pointer to a memory area to be copied to @dest
 * @n: the number of bytes to be copied from @sr
 *
 * Return: pointer to copied memory bytes
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* set the signedness of i same as n */
	unsigned int i;

	/*loop n times to get memory area to copy */
	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
