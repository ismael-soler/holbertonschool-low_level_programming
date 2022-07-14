#include "lists.h"

/**
 * add_nodeint - creats a new node at the start of a list
 * @head: pointer to the head
 * @n: int to insert
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->next = *head;
	h->n = n;
	*head = h;
	return (h);
}
