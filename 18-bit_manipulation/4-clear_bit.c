#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
