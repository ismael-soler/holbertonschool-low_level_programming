#include "3-calc.h"

/**
 * main - calculator
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int a_val, b_val;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a_val = atoi(argv[1]);
	b_val = atoi(argv[3]);

	result = op_func(a_val, b_val);

	printf("%d\n", result);

	return (0);
}
