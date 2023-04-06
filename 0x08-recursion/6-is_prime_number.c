#include "main.h"

/**
 * can_divide - determines whether a number can be divided
 *
 * @num: number to be evaluated.
 * @den: denominator of the division;
 *
 * Return: 0 if true, -1 if false
 *
 */
int can_divide(int num, int den)
{
	/* 2 is the only prime even number, check first */
	if (num / 2 == den)
		return (1);

	/* using modulo arithmetic to check if can divide */
	if (num % den == 0)
		return (0);

	return (can_divide(num, den + 1));
}


/**
 * is_prime_number - determine whether a number is prime
 *
 * @n: number to be evaluated
 *
 * Return: 1 if is prime, or 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (can_divide(n, 2));
}
