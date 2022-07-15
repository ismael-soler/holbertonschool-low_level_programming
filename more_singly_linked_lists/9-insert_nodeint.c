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

	if (head == NULL || idx == '\0' || n == '\0')
		return (NULL);

	aux1 = aux2 = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; i < idx - 1 && aux2; i++)
	{
		aux2 = (aux2)->next;
	}

	aux1 = aux2;
	aux2 = (aux2)->next;
	aux1->next = new_node;
	new_node->n = n;
	new_node->next = aux2;
	return (new_node);
}
