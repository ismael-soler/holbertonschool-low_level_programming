#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	(void) argc;
	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
