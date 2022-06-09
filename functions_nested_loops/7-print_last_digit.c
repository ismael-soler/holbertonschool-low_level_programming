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

	a = (n % 10);
	a = (n + '0');
	_putchar(a);
	return (0);
}
