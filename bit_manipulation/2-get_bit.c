#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if ((n % 2) == 1 || (n % 2) == 0)
		return (n % 2);
	else
		return (-1);
}
