#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node.
 *
 * @head: head of the list
 * @idx: index of the list where new node is added
 * @n: integer element
 *
 * Return: address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ind;
	listint_t *new;
	listint_t *temp;

	temp = *head;

	if (idx != 0)
	{
		for (ind = 0; ind < idx - 1 && temp != NULL; ind++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}
