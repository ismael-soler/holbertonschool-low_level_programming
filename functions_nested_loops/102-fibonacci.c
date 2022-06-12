#include <stdio.h>

/**
 * main - prints first 50 finbonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int pre1, pre2; /* last two printed nubers */
	int print, old_print; /* number to print / printed number placeholder */
	int check; /* for checking if the first number starts with 1 or 2 */

	pre1 = 0;
	pre2 = 1;
	print = 0;
	for (int i = 0; i < 50; i++)
	{
		check = print;
		while (check > 10)
		{
			check / 10;
		}
		if (check == 1 || check == 2)
		{
			printf("%d, ", print);
			old_print = print;
			print = print + pre2;
			pre1 = pre2;
			pre2 = old_print;
		}
		else
		{
			continue;
		}
	}
return (0);
}
