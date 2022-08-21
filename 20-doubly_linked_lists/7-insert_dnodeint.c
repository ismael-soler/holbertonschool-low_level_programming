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
	dlistint_t *new_node = NULL, *aux1, *aux2;
	unsigned int i = 0;


	if (idx == 0 || h == NULL || *h == NULL)
		return (add_dnodeint(h, n));

	aux1 = aux2 = *h;
	for (i = 1; i < idx && aux2; i++)
	{
		aux2 = (aux2)->next;
		if (aux2 == NULL)
			return (NULL);
	}
	if (aux2->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	aux1 = aux2;
	aux2 = (aux2)->next;
	aux1->next = new_node;
	aux2->prev = new_node;
	new_node->next = aux2;
	new_node->prev = aux1;
	return (new_node);
}
