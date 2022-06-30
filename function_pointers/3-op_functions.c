#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: first integrer
 * @b: second integrer
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - difference of a and b
 * @a: first integrer
 * @b: second integrer
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul of a and b
 * @a: first integrer
 * @b: second integrer
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div of a and b
 * @a: first integrer
 * @b: second integrer
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod of a and b
 * @a: first integrer
 * @b: second integrer
 * Return: 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
