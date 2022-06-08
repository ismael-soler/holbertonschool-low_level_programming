#include <stdio.h>

/**
 * main - Print numbers from 0 to 99
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{
			for (c = b; c <= '9'; c++)
			{
			if (c > b && b > a)
			{
			putchar(a);
			putchar(b);
			putchar(c);
			if (a != '7' || b != '8' || c != '9')
				{
				putchar(44);
				putchar(32);
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
