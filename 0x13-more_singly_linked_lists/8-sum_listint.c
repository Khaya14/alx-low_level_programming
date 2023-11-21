#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * in linked list (listint_t).
 *
 * @head: head of the list
 *
 * Return: 0.
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
