#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number of tables to print
 */

void print_times_table(int n)
{
	int x, y;
	int number;

	if (n <= 15 || n >= 0)
	{
		x = 0;
		while (x < n)
		{
			y = 0;
			while (y < n)
			{
				number = x * y;
				if (number > 9)
				{
					_putchar(number / 10 + '0');
					_putchar(n % 10 + '0');
				}

				else if (y != 0)
				{
					_putchar(' ');
					_putchar(n + '0');
				}

				else
				{
					_putchar(n + '0');
				}

				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
