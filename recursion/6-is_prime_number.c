#include "main.h"

/**
 * is_prime_number - detects a prime number
 * @n: number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	if (n < 4 && n > 1)
		return (1);
	return (aux(n, n - 1));
}

/**
 * aux - helps the previous function
 * @num: number
 * @guess: guess
 * Return: 1 if prime, 0 if not
 */

int aux(int num, int guess)
{
	if (guess == 1)
		return (1);
	if (num % guess == 0)
		return (0);
	if (num % guess != 0)
		return (aux(num, guess - 1));
	return (0);
}
