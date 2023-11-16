#include "list.h"

/**
 * free_list - frees the list (list_t).
 *
 * @head: head of linked list
 *
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
