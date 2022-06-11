#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: lenght of the line
 */

void print_diagonal(int n)
{
	int i;
	int tope;

	if (n > 0)
	{
		tope = 0;
		while (n--)
		{
			if (tope > 0)
			{
				for (i = 0; i < tope; i++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
			tope++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
