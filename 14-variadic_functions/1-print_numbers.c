#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;


	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(args, int));
		else
		{
			if (separator != NULL)
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		}
	}
	printf("\n");
	va_end(args);
}
