#include "lists.h"

/**
 * list_len - returns the number of elements in linked list.
 *
 * @h: linked list
 *
 * Return: numnber of elements
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
