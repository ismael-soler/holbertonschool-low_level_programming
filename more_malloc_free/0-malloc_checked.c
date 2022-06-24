#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: pinter to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	return (ar);
}
