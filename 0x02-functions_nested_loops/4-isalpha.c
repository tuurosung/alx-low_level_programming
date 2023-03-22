#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Description: when called, the main function returns
 * 1 is c is a letter and 0 if otherwise
 * Return: 1 is c is lowercase and 0 if otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
