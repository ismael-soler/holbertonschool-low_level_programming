#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer
 * Return: value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (*head == NULL)
		return (0);

	if (head)
	{
		aux = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(aux);
		return (n);
	}
	return (0);
}
