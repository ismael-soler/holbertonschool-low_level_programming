#include <stdio.h>

/**
 * main - prints first 50 finbonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int pre2; /* last printed number */
	int print, old_print; /* number to print / printed number placeholder */
	int check; /* for checking if the first number starts with 1 or 2 */
	int i; /* number of fibonacci numbers to scan */

	pre2 = 1;
	print = 0;
	for (i = 0; i < 50; i++)
	{
		check = print;
		while (check > 10)
		{
			check = check / 10;
		}
		if (check == 1 || check == 2)
		{
			printf("%d, ", print);
			old_print = print;
			print = print + pre2;
			pre2 = old_print;
		}
		else
		{
			continue;
		}
	}
return (0);
}
