#include <stdlib.h>
/**
* free_grid - frees 2D array
* @grid: address of 2D array
* @height: height of array
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
