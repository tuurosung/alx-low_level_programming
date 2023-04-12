#include "main.h"
#include <stdlib.h>

/**
 * allog_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of the 2D array
 *
 * @height: the height of the 2D array
 *
 * Return: A pointer to the 2D array of integers or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	/* initialize variables */
	int x;
	int y;
	int **arr;

	/* if invalid parameters are passed of h and w */
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	/* allocate memory */
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);

		if (arr[x] == NULL)
		{
			while ( x >= 0)
			{
				free(arr[x]);
				x--;
			}
			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return arr;
}
