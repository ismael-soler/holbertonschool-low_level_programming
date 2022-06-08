#include <stdio.h>

/**
 * main - Prints all possible combinations
 * of single-digit numbers
 *
 * Return: Always 0 on success
 *
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');

	return (0);
}
