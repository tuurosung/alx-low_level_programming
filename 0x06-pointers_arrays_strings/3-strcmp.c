#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: First String
 * @s2: Second String
 *
 * Return: returns negative or positive integer if
 * strings dont match, else returns 0 for a match
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
