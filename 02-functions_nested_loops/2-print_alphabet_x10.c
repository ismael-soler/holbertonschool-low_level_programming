#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char contador;
	int letra;

	for (contador = '0'; contador <= '9'; contador++)
	{

		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
