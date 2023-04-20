#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - a function that prints strings followed by a new line
 *
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: the number of parameters to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* initialized variables */
	unsigned int i;
	char *string;

	va_list params;

	/* begin va */
	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(params, char *);

		/*check for NULL */
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}


		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(params);
}

