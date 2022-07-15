#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer
 * @index: index of the node, starting at 0
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	aux = head;
	if (head)
	{
		for (i = 0; i < index; i++)
			aux = aux->next;
		return (aux);
	}
	return (NULL);
}
