#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of @s2
 *
 * Return: pointer to new string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* initialize variables */
	char *new_str;
	unsigned int str_len = n;
	unsigned int i;

	/* check for nulls */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* loop to get string */
	for (i = 0; s1[i]; i++)
		str_len++;

	/* allocate memory */

	new_str = malloc(sizeof(char) * (str_len + 1));

	/* check for NULL */
	if (new_str == NULL)
		return (NULL);

	/* reset str_len */
	str_len = 0;

	for (i = 0; s1[i]; i++)
		new_str[str_len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		new_str[str_len++] = s2[i];

	/* null terminator */
	new_str[str_len] = '\0';

	return (new_str);
}
