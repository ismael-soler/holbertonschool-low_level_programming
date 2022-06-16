#include "main.h"

/**
 * _strncat - appends the string in src to the one in dest
 * @dest: destination
 * @src: source
 * @n: n characters to print
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{}
	n--;
	for (j = 0; n >= 0; j++, i++, n--)
		dest[i] = src[j];
	src[j] = '\0';
	return (dest);
}

