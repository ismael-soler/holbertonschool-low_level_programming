#include  "lists.h"

/**
 * print_listint - prints all the elemens of a int list
 * @h: pointer
 * Return: n of nodes
 */

size_t print_listint(const listint_t *h);
{
	unsigned int u = 0;

	if (h == NULL)
		return (0);
	for (; h->next; h = h->next, u++)
		printf("%d\n", h->n);
	printf("%d\n", h->n);
	u++;
	return (u);
}
