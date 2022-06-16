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
		src[i];
	if (i < n)
		n = i;
	if (n > 0)
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	return (dest);
}

