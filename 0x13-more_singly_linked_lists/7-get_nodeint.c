#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of list
 * (listint_t).
 *
 * @head: head of the list
 * @index:index of node
 *
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;

	for (ind = 0; index && head != NULL; ind++)
	{
		head = head->next;
	}

	return (head);
}
