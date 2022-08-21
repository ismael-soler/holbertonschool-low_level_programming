#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 on success
 *
 */

int main(void)
{
	char n = 'z';

		for (n = 'z'; n >= 'a'; n--)
		{
			putchar(n);
		}
		putchar('\n');
		return (0);
}



