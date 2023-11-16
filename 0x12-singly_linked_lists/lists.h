#ifndef LISTS_H_
#define LISTS_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_h - linked list.
 *
 * @str: malloc allocated string
 * @len: length
 * @next: calls the following node
 *
 * description: linked list node structure.
 */
typedef struct list_h
{
	char *str;
	unsigned int len;
	struct list_h *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
