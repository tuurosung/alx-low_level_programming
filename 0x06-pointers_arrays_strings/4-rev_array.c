#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int holder;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		holder = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = holder;
	}
}
