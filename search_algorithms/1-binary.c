#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: array
 * @size: size of @array
 * @value: value to find
 * Return: index to the first occurence
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, min = 0, max = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	i = max / 2;
	while (1)
	{
		print_digits(array, min, max);
		if (array[i] == value)
		{
			return (i);
		}
		else if (value < array[i])
		{
			max = i - 1;
			i = ((max + min) / 2);
		}
		else if (value > array[i])
		{
			min = i + 1;
			i = ((max + min) / 2);
		}
		if (min > max || max < min)
			break;
	}
	return (-1);
}

/**
 * print_digits - prints digits
 *
 * @array: array
 * @min: min
 * @max: max
 */
void print_digits(int *array, int min, int max)
{
	printf("Searching in array: ");
	for (; min <= max; min++)
	{
		printf("%i", array[min]);
		if (min <= max - 1)
			printf(", ");
	}
	printf("\n");
}
