#include "lists.h"

/**
 * print_listint - prints the elements of a list.
 *
 * @h: head of the list.
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (i)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}