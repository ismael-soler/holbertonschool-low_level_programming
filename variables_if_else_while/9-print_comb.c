#include <stdio.h>

/**
 *
 * main - Prints all possible combinations
 * of single-digit numbers.
 *
 * Return: Always 0 on success
 *
 */

int main(void)
{
	int n;

	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	if (n == '9')
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}



