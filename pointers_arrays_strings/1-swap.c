#include <stdio.h>

/**
* swap_int - swaps the value of the twoo integrers
* @a: first integrer
* @b: second integrer
*/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
