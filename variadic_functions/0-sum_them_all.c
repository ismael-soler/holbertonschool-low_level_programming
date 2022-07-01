#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra parameters
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_args(args, int);

	va_end(args);
	return (sum);
}
