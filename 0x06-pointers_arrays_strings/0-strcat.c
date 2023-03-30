#include "main.h"

/**
 * _strcat - function that concatenates two string
 *
 * @dest: A pointer to a string on which source will be concat
 * @src: A pointer to a string to be appended to destination
 *
 * Return: A pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{	
	/* initialize  counters */
	int index = 0;
	int d_len = 0;
	
	/* get the strlen of dest */
	while (dest[index++])
		d_len++;

	for (index = 0; src[index]; index++)
		dest[d_len++] = src[index];

	return (dest);
}
