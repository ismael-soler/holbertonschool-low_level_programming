#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] == ',' ';' '.' '!' '?' '"' '(' ')' '{'
				'}' 32 9 '\n' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
	return (str);
}
