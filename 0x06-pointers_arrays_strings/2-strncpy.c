#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int s_len = 0;

	while (src[index++])
		s_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = s_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
