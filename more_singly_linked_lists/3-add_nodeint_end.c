#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end
 * @head: pointer
 * @n: n
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *aux;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	if (*head == NULL)
	{
		*head = h;
		return (h);
	}
	for (aux = *head; aux->next; aux = aux->next)
		;
	aux->next = h;
	return (h);
}
