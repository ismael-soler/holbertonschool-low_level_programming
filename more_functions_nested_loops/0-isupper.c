#include "main.h"

/**
 * _isupper - returns 1 if c is upper case
 * @c: character 
 * Return: 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'B')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
