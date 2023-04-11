#include <stdio.h>
#include <stdlib.h>

/**
 * main - when called, main function prints minimum number of coins to make
 * change for an amount of money
 *
 * @argc: (standard) number of arguments passed to the program.
 * @argv: (standard) pointers to the arguments passed
 *
 * Return: 0 if execution successful, or 1 if failed
 */

int main(int argc, char *argv[])
{
	/*initialize cents and change */
	int cents;
	int coins = 0;

	/* check for arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* pass argument to cents variable */
	cents = atoi(argv[1]);


	while (cents > 0)
	{
		/*increment coins */
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}

		/* decrement cents */
		cents--;
	}

	printf("%d\n", coins);
	return (0);
}
