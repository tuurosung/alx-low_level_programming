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

int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc -1);

	return (0);
}
