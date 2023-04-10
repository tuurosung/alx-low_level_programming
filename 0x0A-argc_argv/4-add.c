#include <stdio.h>
#include <stdlib.h>

/**
 * main - when called, main function will add positive numbers
 * and then followed by a new line
 *
 * @argc: (standard) number of arguments passed to the program.
 * @argv: (standard) pointers to the arguments passed
 *
 * Return: 0 if execution successful, or 1 if failed
 */

int main(int argc, char *argv[])
{
	/*initialize two numbers expected to be multiplied, and the sum */
	int i;
	int j;
	int s;

	/* if function does not receive 2 numbers */

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[i]);
	}

	printf("%d\n", s);

	return (0);
}
