#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of the
 * linked list.
 *
 * @head: head of the list
 * @index: index of the list where node is deleted.
 *
 * Return: if successful, 1. if fails, -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ind;
	listint_t *tmp;
	listint_t *next;

	tmp = *head;

	if (index != 0)
	{
		for (ind = 0; ind < index - 1 && tmp != NULL; ind++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL || (tmp->next == NULL && index != 0))
	{
		return (-1);
	}

	next = tmp->next;

	if (index != 0)
	{
		tmp->next = next->next;
		free(next);
	}
	else
	{
		free(tmp);
		*head = next;
	}

	return (1);
}
