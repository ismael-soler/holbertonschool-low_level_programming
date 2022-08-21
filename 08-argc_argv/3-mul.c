#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number;
	int a, b;


	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		number = (a * b);
		printf("%d\n", number);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
