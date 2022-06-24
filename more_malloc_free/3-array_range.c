#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of integrers
 * @min: min
 * @max: max
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min;
	p = malloc((size + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}
