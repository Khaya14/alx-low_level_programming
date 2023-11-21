#include "lists.h"

/**
 * add_nodeint - function that adds new node to beginning of list (listint_t)
 *
 * @head: head of the list
 * @n: n element.
 *
 * Return: if successful, address of the new element. if fails, NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
