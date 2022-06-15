#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int half_length;

	for (i = 0; str[i]; i++);
	if (i % 2 != 0)
		half_length = ((i / 2) + 1);
	else
		half_length = (i / 2);
	for (; str[half_length]; half_length++)
		_putchar(str[half_length]);
	_putchar('\n');
}
