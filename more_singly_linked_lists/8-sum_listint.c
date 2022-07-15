#include "lists.h"

/**
 * sum_listint - sums all the data of a list
 * @head: pointer
 * Return: returns the sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int sum;

	sum = 0;
	if (head)
	{
		for (; aux; aux = aux->next)
			sum += aux->n;
		return (sum);
	}
	if (head == NULL || head->n == '\0')
		return (0);
	return (sum);
}
