#include "main.h"

/**
 * print_times_table - pritns n times table
 * @n: times to print
 */

void print_times_table(int n)
{
	int column, line;
	unsigned int print;
	
	if (n <= 15 && n >= 0)
	{
	column = 0;
	while (column <= n)
	{
		line = 0;
		while (line <= n)
		{
			print = column * line;
			if (n > 9)
			{
				_putchar(print / 10 + '0');
				_putchar(print % 10 + '0');
			}

			else if (line <= 0)
			{
				_putchar(' ');
				_putchar(print + '0');
			}

			else
			{
				_putchar(print + '0');
			}

			if (line != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			line++;
		}
		_putchar('\n');
		column++;
	}
	}
}
