#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: number to print from
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}

	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
