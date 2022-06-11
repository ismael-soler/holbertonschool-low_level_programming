#include "main.h"

/**
 * print_line - prints a line
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	if (n >= 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
