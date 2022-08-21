#include <stdio.h>

/**
 * main - prints first 50 finbonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long pre2; /* last printed number */
	long print, old_print; /* number to print / printed number placeholder */
	int i; /* number of fibonacci numbers to scan */

	pre2 = 1;
	print = 1;
	for (i = 0; i < 50; i++)
	if (i < 49)
	{
		printf("%ld, ", print);
		old_print = print;
		print = print + pre2;
		pre2 = old_print;
	}
	else
	{
		printf("%ld\n", print);
		old_print = print;
		print = print + pre2;
		pre2 = old_print;
	}
return (0);
}
