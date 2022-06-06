#include <stdio.h>

/*
 * main - displays test with the stderr
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", str);

	return (1);
}
