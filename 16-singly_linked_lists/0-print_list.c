#include "lists.h"

/**
 * print_list - prints a list
 * @h: pointer
 * Return: n of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int u = 0;

	if (h == NULL)
		return (0);
	for (; h->next; h = h->next, u++)
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	printf("[%u] %s\n", h->len, h->str);
	u++;
	return (u);
}
