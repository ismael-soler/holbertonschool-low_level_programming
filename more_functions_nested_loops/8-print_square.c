#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	int h, v;

	h = v = size;
	if (size > 0)
	{
		for (v--)
		{
			while (h--)
			{
				_putchar(35);
			}
			_putchar('\n');
			h = size;
		}
	}
	else
	{
		_putchar('\n');
	}
}
