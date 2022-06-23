#include <stdlib.h>

/**
 * create_array - creats an array of chars and init with a specific char
 * @size: size of the array
 * @c: character
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}

