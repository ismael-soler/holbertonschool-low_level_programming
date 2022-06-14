#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int lenght
	int half_lenght

	for (lenght = 0; str[lenght]; lenght++)
		continue;

	for (half_lenght = lenght / 2; str[half_lenght]; half_lenght++)
		_putchar(str[half_lenght]);
}
