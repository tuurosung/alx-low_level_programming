#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 *
 * Description: when called, the main function returns
 * 1 is c is lowercase and 0 if otherwise
 * Return: 1 is c is lowercase and 0 if otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
