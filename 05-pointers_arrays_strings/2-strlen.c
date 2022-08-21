#include <stdio.h>

/**
 * _strlen - Returns the lenght of the string
 * @s: string
 * Return: len
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
