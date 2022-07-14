#include "lists.h"

/**
 * add_node - creats a new node at the start of a list
 * @head: pointer to the head
 * @str: string to insert
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	h->len = strlen(str);
	h->next = *head;
	h->str = strdup(str);
	*head = h;
	return (h);
}
