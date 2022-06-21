#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of all arguments
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int num;

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

	for (i = 1; i < argc; i++)
		num += atoi(argv[i]);
	printf("%d\n", num);
return (0);
}
