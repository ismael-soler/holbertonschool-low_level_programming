#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to s or null
 */

char *_strchr(char *s, char c)
{

	for (; *s;)
	{
		if (*s == c)
			return (s);
	}
	return (s);

}
