#include <stdio.h>

/**
 * main - Print all digits again
 *
 * Return: 0 on Success
 *
 */

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
