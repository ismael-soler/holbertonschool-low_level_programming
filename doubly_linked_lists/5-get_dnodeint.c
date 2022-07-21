#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to the head
 * @index: index
 * Return: pointer to the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i;

	aux = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && aux; aux = aux->next, i++)
		;
	return (aux);
}
