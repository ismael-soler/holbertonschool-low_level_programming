#include <stdio.h>

/**
 * main - Print numbers from 0 to 99
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{
			if (b > a)
			{
			putchar(a);
			putchar(b);
			if (a != '8' || b != '9')
				{
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
