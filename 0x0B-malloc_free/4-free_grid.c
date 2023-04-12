#include "main.h"
#include <stdlib.h>


/**
 * free_grid - function that frees a 2d grid previously created by
 * alloc_grid
 *
 * @grid: a 2d array to be freed by function
 * @height: the height of the 2d grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	/* loop through array and free memory at the end of the loop */
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
