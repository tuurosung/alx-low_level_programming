#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - function that prints numbers followed by a new line
 *
 * @separator:  is the string to be printed between the numbers
 * @n: is the number of integers passed to the function
 * @...: number of arguments to be passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* initialize variables */
	unsigned int i;
	va_list params;

	/*begin va */
	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));

		/* check for NULL */
		if (separator == NULL)
			printf("%s", separator);

		if (i != (n - 1))
			printf("%s", separator);

	}

	printf("\n");

	va_end(params);
	/* end va */

}
