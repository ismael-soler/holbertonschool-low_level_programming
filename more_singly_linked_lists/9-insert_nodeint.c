#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index position
 * @head: head position
 * @idx: index
 * @n: number to insert
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux1, *aux2;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	aux1 = aux2 = *head;
	for (i = 1; i < idx && aux2; i++)
	{
		aux2 = (aux2)->next;
		if (aux2 == NULL)
			return (NULL);
	}

	aux1 = aux2;
	aux2 = (aux2)->next;
	aux1->next = new_node;
	new_node->next = aux2;
	return (new_node);
}
