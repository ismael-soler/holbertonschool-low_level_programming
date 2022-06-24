#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; a[i]; i++)
		a[i] = '0';
	return (a);
}
