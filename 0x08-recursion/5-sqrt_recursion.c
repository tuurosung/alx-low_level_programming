#include "main.h"




/**
 * get_sqrt - functions to mathematically determine the square root
 *
 * @val: whose root is to be found;
 *
 * @rt: root variable from _sqrt_recursive function
 *
 * Return: the natural square root or -2 if otherwise
 */

int get_sqrt(int val, int rt)
{
	/* check for perfect squares */
	if ((rt * rt) == val)
		return (rt);

	if (rt == val / 2)
		return (-1);

	return (get_sqrt(val, rt + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number whose square root is to be determined
 * Return: the natural square root of n, or -1 if otherwise
 */
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

	return (get_sqrt(n, rt));
}
