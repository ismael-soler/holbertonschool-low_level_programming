#include <stdio.h>

/**
 * _strlen - returns the lenght of the string
 * @s: string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
