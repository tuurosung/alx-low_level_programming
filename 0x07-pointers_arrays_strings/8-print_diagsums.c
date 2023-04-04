#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: square matrix of integers
 * @size : parameters of the matrix
 */

void print_diagsums(int *a, int size)
{
	/* initialize counters i,t1,t2 */
	int i;
	int t1 = 0;
	int t2 = 0;

	for (i = 0; i < size; i++)
	{
		/* increment t1 by val of a[i] */
		t1 += a[i];
		a += size;
	}

	/*reset a */
	a -= size;

	for (i = 0; i < size; i++)
	{
		t2 += a[i];
		a -= size;
	}

	printf("%d, %d \n", t1, t2);
}
