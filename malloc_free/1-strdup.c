#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to a new string
 */

char *_strdup(char *str);
{
	int size;
	char *ar;
	int i;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size]; size++)
		;
	ar = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ar[i] = str[i];
	return (ar);
}
