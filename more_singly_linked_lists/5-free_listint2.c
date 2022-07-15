#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *aux, *h;

	if (*head == NULL)
	{
		free(*head);
		return;
	}
	h = *head;
	for (aux = h; h->next;)
	{
		h = h->next;
		free(aux);
		aux = h;
	}
	free(head);
	free(h);
}
