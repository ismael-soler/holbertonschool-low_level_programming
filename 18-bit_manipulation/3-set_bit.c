#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to a number
 * @index: index
 * Return: 1 if it worked -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	unsigned long int aux;

	if (index <= 64)
	{
		aux = (1 << index);
		*n = aux | num;
		return (1);
	}
	return (-1);
}
