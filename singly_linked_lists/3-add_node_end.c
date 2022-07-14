#include "lists.h"

/**
 * add_node_end - adds a node to the end
 * @head: pointer
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *last_node;

	last_node = *head;
	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	h->str = strdup(str);
	h->len = strlen(str);
	h->next = NULL;
	if (*head == NULL)
	{
		*head = h;
		return (h);
	}
	for (; last_node->next; last_node = last_node->next)
		;
	last_node->next = h;
	return (h);
}
