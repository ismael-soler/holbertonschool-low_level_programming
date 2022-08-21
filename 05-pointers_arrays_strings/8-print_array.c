#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	n--;
	if (n <= 0)
	printf("\n");
	else
	{
		for (i = 0; i <= n; i++)
		{
			if (i < n)
				printf("%d, ", a[i]);
			else if (i == n)
				printf("%d\n", a[i]);
		}
	}
}
