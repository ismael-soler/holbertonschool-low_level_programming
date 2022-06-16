#include <stdio.h>

#include "main.h"

/**
 * puts2 - prints even digits of a string
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (!(i % 2))
			_putchar(str[i]);
	_putchar('\n');
}
