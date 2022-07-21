#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of a linked list
 * @head: pointer to the head
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux = head;

	for (; aux; aux = aux->next)
		sum += aux->n;

	return (sum);
}
