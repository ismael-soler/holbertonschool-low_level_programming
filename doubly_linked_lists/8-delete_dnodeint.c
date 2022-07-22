#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the head of the list
 * @index: index
 * Return: 1 if succeeded or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux0, *aux1, *aux2;

	if (*head == NULL)
		return (-1);

	aux1 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux1);
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		aux1 = aux1->next;
		if (aux1 == NULL)
			return (-1);
	}
	aux2 = aux1->next;
	aux0 = aux1->prev;
	aux0->next = aux2;
	aux2->prev = aux0;
	free(aux1);
	return (1);
}
