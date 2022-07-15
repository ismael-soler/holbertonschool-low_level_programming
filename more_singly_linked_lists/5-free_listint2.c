#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (*head == NULL)
	{
		return;
	}
	for (h = *head; *head;)
	{
		*head = (*head)->next;
		free(h);
		h = *head;
	}
	free(h);
}
