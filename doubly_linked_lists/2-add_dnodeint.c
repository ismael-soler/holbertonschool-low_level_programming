#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to the head
 * @n: content of the node
 * Return: address of the enew element or null if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	if (*head)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	else
		new_node->next = NULL;
	*head = new_node;
	return (new_node);
}
