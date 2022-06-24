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
	int i;

	ar = malloc(height * sizeof(**ar));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(**ar));
		if (ar[i] == NULL)
			return (NULL);
	}
	return (ar);
}
