#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int lett[] = "aAeEoOtTlL";
	int num[] = "4433770011";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; lett[j]; j++)
			if (str[i] == lett[j])
				str[i] = num[j];
	}
	return (str);
}
