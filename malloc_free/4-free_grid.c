#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: Height of the gird.
 *
 * Description: Frees the memory allocated by alloc_grid for the 2D grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
