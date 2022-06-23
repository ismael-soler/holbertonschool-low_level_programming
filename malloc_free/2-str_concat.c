#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: sth
 */

char *str_concat(char *s1, char *s2)
{
	int size;
	int i, j;
	char *ar;

	for (size = 0; s1[size]; size++)
		;
	for (; s2[size]; size++)
		;
	ar = malloc(size * sizeof(char));
	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		ar[i] = s2[j];
	return (ar);
}
