#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the head of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux0, *aux1;

	(*head)->next = NULL;
	aux0 = aux1 = *head;
	for (aux0 = aux1 = *head; aux1;)
	{
		aux1 = aux1->next;
		if (aux1 != NULL)
		{
			(*head)->next = aux0;
			aux0 = *head;
		}
	}
	return (*head);
}
