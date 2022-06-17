#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to s or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s; i++)
	{
		if (*s == c)
			break;
	}
	return (s);

}
