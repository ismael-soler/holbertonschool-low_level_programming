#include "main.h"

/**
 * _strncpy - appends the string in src to the one in dest
 * @dest: destination
 * @src: source
 * @n: n characters to print
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i]; i++)
		;
	i--;
	if (n == 0 || src[0] == '\0')
		;
	else if (i < n)
	{
		for (i = 0; src[i]; i++)
			dest[i] = src[i];
		for (; i <= n; i++)
			dest[i] = '\0';
	}
	else if (i > n)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
