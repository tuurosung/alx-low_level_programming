#include <stdio.h>

/**
 * main - when called, main function will print the program name
 * then followed by a new line
 *
 * @argc: (standard) number of arguments passed to the program.
 * this will be passed through the __unused__ attribute
 * @argv: (standard) pointers to the arguments passed
 *
 * Return: 0 if execution successful
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", arg[0]);

	return (0);
}
