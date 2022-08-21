#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, multiplier;
	int exp;

	if (b == NULL)
		return (0);
	for (exp = 0; b[exp]; exp++)
		if (b[exp] != '0' && b[exp] != '1')
			return (0);

	num = 0;
	multiplier = 1;
	for (exp--; b[exp]; exp--)
	{
		if (b[exp] == '1')
			num += multiplier;
		multiplier *= 2;
	}

	return (num);
}
