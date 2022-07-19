#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number 1
 * @m: number 2
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int aux;

	for (aux = n ^ m; aux > 0; aux = aux >> 1)
	{
		count += aux & 1;
	}
	return (count);
}
