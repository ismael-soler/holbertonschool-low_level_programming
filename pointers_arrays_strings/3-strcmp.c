#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string n1
 * @s2: string n2
 * Return: counter
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int counter;

	counter = 0;
	for (i = 0, j = 0; s1[i] || s2[j]; i++, j++)
	{
		if (i > j)
			counter++;
		else
			counter--;
	}
	return (counter);
}
