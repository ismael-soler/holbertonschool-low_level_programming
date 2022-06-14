#include <stdio.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s--)
	{
		len++;
	}
	for (i = 0; i >= 0; i++)
	{
		printf("%d", s[len - i]);
	}
}
