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

	if (n == 0 || src[0] == '\0')
		return (dest);
	for (i = 0; src[i]; i++)
		;
	if (i < n)
		n = i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
