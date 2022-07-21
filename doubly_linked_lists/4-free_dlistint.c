#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head == NULL)
	{
		free(head);
		return;
	}
	for (aux = head; aux; aux = aux->next)
	{
		aux = aux->next;
		free(head);
		head = aux;
	}
}
