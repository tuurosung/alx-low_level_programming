#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that prints a valid key for the username
 * @argc: number of params
 * @argv: array of parameters
 *
 * Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passkey[7], *encoder;
	int len = strlen(argv[1]), i, holder;

	encoder = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	holder = (len ^ 59) & 63;
	passkey[0] = encoder[holder];

	holder = 0;
	for (i = 0; i < len; i++)
		holder += argv[1][i];
	passkey[1] = encoder[(holder ^ 79) & 63];

	holder = 1;
	for (i = 0; i < len; i++)
		holder *= argv[1][i];
	passkey[2] = encoder[(holder ^ 85) & 63];

	holder = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > holder)
			holder = argv[1][i];
	}

	srand(holder ^ 14);
	passkey[3] = encoder[rand() & 63];
	holder = 0;
	for (i = 0; i < len; i++)
		holder += (argv[1][i] * argv[1][i]);
	passkey[4] = encoder[(holder ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		holder = rand();

	passkey[5] = encoder[(holder ^ 229) & 63];

	passkey[6] = '\0';
	printf("%s", passkey);
	return (0);
}
