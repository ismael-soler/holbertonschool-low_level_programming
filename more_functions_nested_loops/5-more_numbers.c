#include "main.h"

/**
 * more_numbers - prints all numbers from 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;
	int max_b;
	int i;

	max_b = '9';
	for (i = '0'; i <= '9' ; i++)
	{
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
	max_b = '9';
	}
}
