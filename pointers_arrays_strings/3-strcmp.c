#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string n1
 * @s2: string n2
 * Return: counter
 */

int _strcmp(char *s1, char *s2)
{
	int i, a, b;
	int counter;

	for (i = 0; s1[i] || s2[i] || counter != 0; i++)
		a = s1[i];
		b = s2[i];
		counter = (a - b);
	return (counter);
}
