#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int x;
	int y;
	int n;

	x = 0;
	
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			n = x * y;
			
			if (n > 9)
			{
				_putchar(n / 10 + '0');
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
