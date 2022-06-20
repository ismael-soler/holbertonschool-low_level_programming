#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if it does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (extra(n, 1));
}

/**
 * extra - extra function to solve the previous
 * @num: number
 * @guess: guess
 */

int extra(int num, int guess)
{
	guess = 1;

	if (guess * guess == num)
		return (guess);
	else if (guess * guess < num)
		return (extra(num, (guess + 1)));
	else
		return (-1);
}
