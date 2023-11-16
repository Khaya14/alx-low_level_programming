#include "lists.h"

/**
 * add_node - adds node to beginning of list (list_t).
 *
 * @str: string that is to be stored in list
 * @head: head of the linked list
 *
 * Return: If successful, address of new element. If fails, NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (len = 0; str[len];)
		len++;

	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
