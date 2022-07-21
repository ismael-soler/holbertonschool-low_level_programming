#include "lists.h"

/**
 * add_dnodeint_end - add node int at the end
 * @head: pointer to the head
 * @n: number to include
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head)
	{
		for (; (*head)->next; *head = (*head)->next)
			;
		(*head)->next = new_node;
		new_node->prev = *head;
	}
	else
		new_node->next = NULL;
	*head = new_node;
	return (new_node);
}
