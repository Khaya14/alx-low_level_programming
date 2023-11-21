#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a list (listint_t).
 *
 * @head: head of the list
 * @n: n element.
 *
 * Return: if successful, address of the new element. if fails, NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	(void)last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new
	}
	return (*head);
}
