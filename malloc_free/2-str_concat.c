#include <stdlib.h>
#include <string.h>

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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = ""
	size = strlen(s1) + strlen(s2);
	ar = malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ar[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		ar[i] = s2[j];
	ar[i] = '\0';
	return (ar);
}
