#include "lists.h"

/**
 * print_dlistint - prtins all elements of a dlistint_t list
 * @h: pointer to the head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int u = 0;

	if (h == NULL)
		return (0);
	for (; h; h = h->next, u++)
		printf("%d\n", h->n);
	return (u);
}
