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
		; /* calculo distancia */
	if (i < n) /* si el contenido es mas chico que n */
		n = i;
	if (n > 0)
	{
		for (i = 0; i < n; i++) /* copiacion */
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (dest);
}

