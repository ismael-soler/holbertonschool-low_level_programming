#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: string to be printed between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char*);
		if (temp == NULL)
			if (i == n - 1)
				printf("(nil)");
			else
				printf("(nil)%s", separator);
		else if (i == n - 1)
			printf("%s", temp);
		else
		{
			if (separator != NULL)
				printf("%s%s", temp, separator);
			else
				printf("%s", temp);
		}
	}
	printf("\n");
	va_end(args);
}
