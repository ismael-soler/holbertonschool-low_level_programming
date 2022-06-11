#include <stdio.h>

/**
 * main - prints from 1 to 100 but
 * for multiples of three print Fizz and for multiples
 * of five print Buzz, if mulitple of both print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int n; /*Number to print*/

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}

