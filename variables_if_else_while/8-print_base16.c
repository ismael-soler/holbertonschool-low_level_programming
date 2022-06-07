#include <stdio.h>

/**
 * main - Write a program that prints
 * all numbers in hexadecimal base
 *
 * Return: Always 0 on success
 *
 */

int main(void)
{
	int n;
	char ch;
		
		for (n = '0'; n <= '9'; n++)
		{
			putchar(n);
		}
		for (ch = 'a'; ch <= 'f'; ch++)
		{
			putchar(ch);
		}

		putchar('\n');
		return (0);
}



