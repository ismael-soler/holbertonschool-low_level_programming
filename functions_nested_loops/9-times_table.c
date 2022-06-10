#include "main.h"

/**
 * times_table - printsde 9 times table 
 *
 * Return: 0 
 */

void times_table(void)
{
	char x, y, n;
	
	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			n = (x * y);
			if (y == '0')
			{
				_putchar(n + '0');
			}
			else if (n <= '9') 
			{
				_putchar(' ');
				_putchar((n % 10) + '0');
			}
			else if (y <= '9')
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (y != '9') /*post numero*/
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}

	}
}
