#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
	{
		free(head);
		return;
	}
	for (aux = head; aux->next;)
	{
		free(aux);
		aux = aux->next;
	}
	free(aux);
}
