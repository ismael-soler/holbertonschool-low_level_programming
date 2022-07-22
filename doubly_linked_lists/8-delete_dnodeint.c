#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the head
 * @index: index
 * Return: 1 if succeed -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux0, *aux1, *aux2;

	if (head == NULL || *head == NULL)
		return (-1);

	aux1 = *head;
	if (index == 0)
	{
		*head = aux1->next;
		aux2 = aux1->next;
		free(aux1);
		if (aux2)
			aux2->prev = NULL;
		return (1);
	}

	for (i = 0; aux1 && i < (index - 1); i++)
		aux1 = aux1->next;
	if (aux1 == NULL || aux1->next == NULL)
		return (-1);
	aux2 = aux1->next;
	aux0 = aux2->next;
	aux1->next = aux0;
	if (aux0)
		aux0->prev = aux1;
	free(aux2);
	return (1);
}
