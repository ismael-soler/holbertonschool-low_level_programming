#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head
 * @idx: where the new node should be added
 * @n: value to fill the node
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux1, *aux2;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	aux1 = aux2 = *h;
	for (i = 1; i < idx && aux2; i++)
	{
		aux2 = (aux2)->next;
		if (aux2 == NULL)
			return (NULL);
	}

	aux1 = aux2;
	aux2 = (aux2)->next;
	aux1->next = new_node;
	aux2->prev = new_node;
	new_node->next = aux2;
	return (new_node);
}
