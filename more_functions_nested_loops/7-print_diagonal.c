#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: lenght of the line
 */

void print_diagonal(int n)
{
	if (n >= 0)
	{
		while (n--)
		{
			for (int i; i <= n; i++)
			{
				_putchar(' ');
				_putchar('\\\');
				-putchar('n');
			}
		}
	}
}
