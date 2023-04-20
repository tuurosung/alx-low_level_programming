#include "function_pointers.h"


/**
 * print_name - a function that prints a name
 *
 * @name: name to be printed
 * @f: Pointer to the function that prints a name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	/* check for NULL */
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
