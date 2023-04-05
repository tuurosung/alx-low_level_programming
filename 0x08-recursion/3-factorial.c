#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: given number whose factorial is to be determined
 *
 * Return: if n is less that 0, return -1 to indicate an error
 */
int factorial(int n)
{
	/* initialize the ans variable, pass n to ans for memory */
	int ans = n;

	/* first check for error, thus less than zero */
	if (n < 0)
		return (-1);

	/* instead of n==0 comparison, take care of decimals too */
	else if (n >= 0 && n <= 1)
		return (1);

	/*if the above conditions are false, recursively call function */
	ans *= factorial(n - 1);

	return (ans);

}
