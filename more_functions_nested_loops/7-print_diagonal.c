#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: lenght of the line
 */

void print_diagonal(int n)
{
	int i;
	int tope;

	if (n >= 0)
	{
		tope = 1;
		while (n--)
		{
			_putchar(92);
			_putchar('\n');
			for (i = 0; i <= tope; i++)
			{
				_putchar(' ');
			}
			tope++;
		}
	}
}
