#include "main.h"

/**
 * _strlen_recursion - returns the lenght of the string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s != 0)
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

