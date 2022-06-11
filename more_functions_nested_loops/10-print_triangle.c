#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: vertical size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int line, column;
	int space, max_space;
	int hash, max_hash;

	line = column = size;
	max_space = size - 1;
	max_hash = 1;

	if (size > 0)
	{
		while (line--)
		{
			space = max_space;
			hash = max_hash;
				while (space > 0)
				{
					_putchar(' ');
					space--;
				}
				while (hash > 0)
				{
					_putchar(35);
					hash--;
				}
			_putchar('\n');
			max_space--;
			max_hash++;
			column = size;
		}
	}
	else
	{
		_putchar('\n');
	}

}
