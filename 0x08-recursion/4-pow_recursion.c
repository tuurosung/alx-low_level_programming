#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 *
 * @x: base number, integer
 *
 * @y: superscript of power
 *
 * Return: -1 if y is less than 0, or ans if otherwise
 *
 */
int _pow_recursion(int x, int y)
{
	/* Initialize ans to x for memory */
	int ans = x;

	/* return -1 if y less than 0 */
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		/* recursively call the function itself */
		ans *= _pow_recursion(x, y - 1);
		return (ans);
	}
}
