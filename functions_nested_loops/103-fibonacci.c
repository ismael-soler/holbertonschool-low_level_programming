#include <stdio.h>

/**
 * main - prints first 50 finbonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long pre2; /* last printed number */
	long print, old_print; /* number to print / printed number placeholder */
	long sum; /* total sum */

	sum = 0;
	pre2 = 1;
	print = 1;
	while (print < 4000000)
	{
		if (print % 2 == 0)
		{
			sum = sum + print;
		}
		old_print = print;
		print = print + pre2;
		pre2 = old_print;
	}
	printf("%ld\n", sum);
return (0);
}
