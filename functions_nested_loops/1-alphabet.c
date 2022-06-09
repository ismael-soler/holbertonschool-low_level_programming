#include "main.h"

/**
 * main - using only _putchar followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int letra;

	for (letra = 'a'; letra == 'z'; letra++)
	{
		_putchar(letra);
	}
	_putchar('\n');
	return (0);
}


