#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: pointer or NULLL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	size = strlen(s1) + n;
	p = malloc((size + 6) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';

	return (p);
}
