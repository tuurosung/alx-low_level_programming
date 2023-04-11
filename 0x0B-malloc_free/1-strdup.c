#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be duplicated
 *
 * Return: A pointer to the newly duplicated string or
 * NULL if string is NULL or if insufficient memory was available
 */

char *_strdup(char *str)
{
	/* initialize variables and counter */
	char *newstr;
	int i;
	int j;

	/* check for null string */
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	/* allocate memory */
	newstr = malloc((j + 1) * sizeof(char));

	/* the new string cannot be NULL */
	if (newstr == NULL)
		return (NULL);

	/* generate new string */
	for (i = 0; str[i]; i++)
		newstr[i] = str[i];

	newstr[j] = '\0';

	return (newstr);
}
