#include "list_h"

/**
 * free_list - frees the list (list_t).
 *
 * @head: head of linked list
 *
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		temp = head->next;
		free(temp->str);
		free(temp);
		head = temp;
	}
}
