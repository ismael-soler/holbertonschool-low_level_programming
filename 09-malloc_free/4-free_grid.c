#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
