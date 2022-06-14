#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int length;
	int half_length;

	for (length = 0; str[length]; length++)
		continue;

	for (half_length = length / 2; str[half_length]; half_length++)
		_putchar(str[half_length]);
	_putchar('\n');
}
