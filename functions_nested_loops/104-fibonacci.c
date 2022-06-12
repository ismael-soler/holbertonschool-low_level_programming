#include <stdio.h>

/**
 * main - prints first 50 finbonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long pre2; /* last printed number */
	unsigned long print, old_print;
	int i; /* iteratiorns */

	pre2 = 1;
	print = 1;
	for (i = 0; i < 98; i++)
	{
		printf("%ld, ", print);
		old_print = print;
		print = print + pre2;
		pre2 = old_print;
	}
return (0);
}
