#include <stdio.h>

/**
 * main - prints first 50 finbonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int pre2; /* last printed number */
	int print, old_print; /* number to print / printed number placeholder */
	int i; /* number of fibonacci numbers to scan */

	pre2 = 1;
	print = 1;
	for (i = 0; i < 50; i++)
	{
		printf("%d, ", print);
		old_print = print;
		print = print + pre2;
		pre2 = old_print;
	}
return (0);
}
