#include "main.h"

/**
 * _isalpha - detects for alphabetic character or not
 * @c: character
 * Return: 1 if alpha 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
