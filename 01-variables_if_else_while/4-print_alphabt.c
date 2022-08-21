#include <stdio.h>

/**
 * main - Displays the whole alphabet in lowercase
 *
 * Return: 0 in Succes
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		ch++;
		}
		else
		{
		ch++;
		}
	}
	putchar('\n');
	return (0);
}
