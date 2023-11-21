#include "lists.h"

/**
 * pop_listint - function that deleted the head node of
 * linked list (listint_t).
 *
 * @head: head of the list
 *
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	i = current->n;

	temp = current->next;

	free(current);

	*head = temp;

	return (i);
}

