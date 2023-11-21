#include "lists.h"

/**
 * free_listint2 - function that frees a linked list (listint_t)
 *
 * @head: head of the list.
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *last;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((last = current) != NULL)
		{
			current = current->next;
			free(last);
		}
		*head = NULL;
	}
}
