#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number
 * Return: 0
 *
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = (-1 * (n % 10));
		_putchar(a + '0');
	}
	else
	{
		a = (n % 10);
		_putchar(a + '0');
	}
	return (a);
}
