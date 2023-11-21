#include "lists.h"

/**
 * free_listint - function that frees a list (listint_t).
 *
 * @head: head of the list.
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *last;

	while ((last = head) != NULL)
	{
		head = head->next;
		free(last);
	}
}
