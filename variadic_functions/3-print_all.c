#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printchar(va_arg(arg, int));
				break;
			case 'i':
				printint(va_arg(arg, int));
				break;
			case 'f':
				printfloat(va_arg(arg, double));
				break;
			case 's':
				printstring(va_arg(arg, char *));
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}

/**
 * printchar - prints a char
 * @a: to print
 */

void printchar(char a)
{
	printf("%c", a);
}

/**
 * printint - prints a char
 * @a: to print
 */

void printint(int a)
{
	printf("%d", a);
}

/**
 * printfloat - prints a char
 * @a: to print
 */

void printfloat(float a)
{
	printf("%f", a);
}

/**
 * printstring - prints a char
 * @a: to print
 */

void printstring(char *a)
{
	printf("%s", a);
}
