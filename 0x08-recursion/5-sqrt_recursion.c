#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number whose square root is to be determined
 *
 * Return: the natural square root of n, or -1 if otherwise
 */


/**
 * getSqRt - functions to mathematically determine the square root
 *
 * @val: whose root if to be found;
 *
 * @rt: root variable from _sqrt_recursive function 
 *
 * Return: the natural square root or -1 if otherwise
 */

int getSqRt(int val, int rt)
{
	/* check for perfect squares */
	if ((rt * rt) == val)
		return rt;

	if (rt == val / 2)
		return (-1);

	return (getSqRt(val, rt + 1));
}


int _sqrt_recursion(int n)
{
	/* let rt be the square root of n */
	int rt = 0;

	/* negative number dont have square root */
	if (n < 0)
		return (-1);

	/*the square root of 1 is always 1 */
	if (n == 1)
		return (1);

	/* to get the square root, we need a supporting function getSqRt */

	return (getSqRt(n, rt));
}
