#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to the head
 * @n: content of the node
 * Return: address of the enew element or null if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h_temp;

	h_temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	h_temp->prev = new_node;
	*head = new_node;
	return (new_node);
}
