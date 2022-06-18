#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: board
 */

void print_chessboard(char (*a)[8])
{
	int i, printed;

	for (i = 0, printed = 0; a[0][i]; i++)
	{
		if (printed < 7)
		{
			_putchar(a[0][i]);
			printed++;
		}
		else
		{
			_putchar(a[0][i]);
			_putchar('\n');
			printed = 0;
		}
	}
}
