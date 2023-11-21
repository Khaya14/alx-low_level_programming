#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in
 * linked list.
 *
 * @h: pointer to the head of list.
 *
 * Return: number of elements in a linked list (listint_t).
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
