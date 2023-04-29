#include <stdio.h>

void __attribute__((constructor)) printHare(void);

/**
 * printHare - a function that prints a given string
 *
 */

void printHare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
