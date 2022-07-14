#include "lists.h"

/**
 * listint_len - returns list lenght
 * @h: pointer
 * Return: n of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h->next; i++)
		h = h->next;
	return (i + 1);
}
