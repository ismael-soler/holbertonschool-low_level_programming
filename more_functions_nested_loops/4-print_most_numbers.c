#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' || i != '4')
		{
		_putchar(i);
		}
		else
		{
		continue;
		}
	}
_putchar('\n');
}
