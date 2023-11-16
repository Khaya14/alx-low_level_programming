#include "lists.h"

/**
 * add_node_end: adds new node at the end of list (list_t).
 *
 * @str: string that is to be stored
 * @head: head of linked list
 *
 * Return: If successful,address of new element. If fails, NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (len = 0; str[len]);
		len++;

	new->len = len;
	new->next = NULL;
	last = *head;

	if (last == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new
	}
	return (*head);
}
