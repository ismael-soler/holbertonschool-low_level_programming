#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer
 */

void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
	{
		free(head);
		return;
	}
	for (aux = head; aux->next;)
	{
		free(aux->str);
		free(aux);
		aux = aux->next;
	}
	free(aux->str);
	free(aux);
}
