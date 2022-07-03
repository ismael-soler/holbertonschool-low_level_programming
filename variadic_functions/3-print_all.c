#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format
 */

void print_all(const char * const format, ...)
{
	int i;
	char format_char;

	i = 0;
	while (format[i])
	{
		format_char = format[i];
		get_func(format_char);
		i++;
	}

}

/**
 * get_func - finds tihe correct function to printthe text
 * @format_char: format character identifier
 */

void get_func(int format_char)
{
	char ar[] = {'c', 'i', 'f', 's'};
	int i;

	i = 0;
	while (ar[i])
	{
		if (format_char == ar[i])
			printf("%c\n", ar[i]);
		i++;
	}
}
