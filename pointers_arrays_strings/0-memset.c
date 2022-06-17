#include "main.h"

/**
 * _memset - fills the first n bytes of the moemory area with a constant byte
 * @s: string
 * @b: constant byte
 * @n: number of bytes to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (n <= 0)
		;
	else
		for (i = 0; i < n; i++)
			s[i] = 'b'
	return (s);
}

