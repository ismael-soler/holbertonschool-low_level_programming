#include "lists.h"

/**
 * dlistint_len - returs the number o felemetns in a linked list
 * @h: pointer to the head
 * Return: numbre of elements of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int u;

	for(u = 0; h; h = h->next, u++)
		;
	return (u);
}
