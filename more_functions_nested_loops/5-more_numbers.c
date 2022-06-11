#include "main.h"

/**
 * more_numbers - prints all numbers from 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;
	int max_b;
	int counter;

	max_b = '9';
	counter = '0';
	for (a = '0'; a <= '1'; a++)
	{
		for (b = '0'; b <= max_b; b++)
		{
			if (a == '1')
			{
				_putchar(a);
			}
				_putchar(b);
		}
		max_b = '4';
	}
	_putchar('\n');
}
