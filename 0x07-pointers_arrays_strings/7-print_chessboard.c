#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: array of chessboard
 *
 */
void print_chessboard(char (*a)[8])
{
	/* initialize counters i and j */
	int i;
	int j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
