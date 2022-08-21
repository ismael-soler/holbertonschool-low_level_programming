#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head of the list
 * @index: index
 * Return: 1 if succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *aux, *aux2;

	if (*head == NULL)
		return (-1);

	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (i = 1, aux = *head; i < index; i++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (-1);
	}
	aux2 = aux->next;
	aux->next = aux2->next;
	free(aux2);
	return (1);
}

