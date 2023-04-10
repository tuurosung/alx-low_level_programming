#include <stdio.h>

/**
 * main - when called, main function will print all the args it
 * receives including the first one
 *
 * @argc: (standard) number of arguments passed to the program.
 * @argv: (standard) pointers to the arguments passed
 *
 * Return: 0 if execution successful
 */

int main(int argc, char *argv[])
{
	/*initialize a counter i */
	int i;

	/* loop through all the arguments and print each */
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
