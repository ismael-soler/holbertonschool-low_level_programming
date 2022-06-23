#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	
	ar = malloc((width * height) * sizeof(int));
	return (ar);
}
