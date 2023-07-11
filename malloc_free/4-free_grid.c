#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees the memory allocate for the gridcreated by alloc_grid()
*
* @grid: grid to free
* @height: height of the grid
*/

void free_grid(int **grid, int height)
{
	int  grid_contain;

	if ((grid == 0) || (height == 0))
		return;

	for (grid_contain = 0; grid_contain < height; grid_contain++)
		free(grid[grid_contain]);

	free(grid);
}
