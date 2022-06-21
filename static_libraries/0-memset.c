#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area with a constant byte
 * @s: string
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n <= 0)
		;
	else
		for (i = 0; i < n; i++)
			s[i] = b;
	return (s);
}

