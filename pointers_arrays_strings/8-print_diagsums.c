#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integrers
 * @a: matrix of integrers
 * @size: size of the square
 */

void print_diagsum(int *a, int size)
{
	int i, j;
	unsigned int sum_a, sum_b;

	for (i = 0, j = 0; i < size; i++, j++)
		sum_a += a[i][j];
	for (; i> 0; i--, j--)
		sum_b += a[i][j];
	printf("%d, %d", sum_a, sum_b);
}
