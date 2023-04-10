#include <stdio.h>

/**
 * main - when called, main function will multiplies two numbers
 *
 * @argc: (standard) number of arguments passed to the program.
 * @argv: (standard) pointers to the arguments passed
 *
 * Return: 0 if execution successful, or 1 if failed
 */

int main(int argc, char *argv[])
{
	/*initialize two numbers expected to be multiplied, and the product */
	int i;
	int j;
	int p;

	/* if function does not receive 2 numbers */

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	p = i * j;

	printf("%d\n", p);

	return (0);
}
