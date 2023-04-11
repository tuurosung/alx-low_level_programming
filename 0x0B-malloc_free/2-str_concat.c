#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: A pointer to a newly allocated space in memory with
 * resulting string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	/* initialize variables and counters */
	char *new_str;
	int i;
	int j = 0;
	int k = 0; /*lenght of new string */

	/* neither s1 nor s2 can be null */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* loop to get length of strings */
	for (i = 0; s1[i] || s2[i]; i++)
		k++;

	/* allocate memory */
	new_str = malloc(k * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		new_str[j++] = s2[i];

	return (new_str);
}
