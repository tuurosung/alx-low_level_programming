#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all its parameters
 *
 * @n: is the number o parameters or arguments supplied
 * @...: all possible number of parameters supplied
 *
 * Return: sum of all parameters or 0 if n == 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	/* initialize variables */
	va_list params;
	unsigned int i;
	int sum = 0;

	va_start(params, n);

	for (i = 0; i < n; i++)
		sum += va_arg(params, int);

	va_end(params);

	return (sum);
}
	
