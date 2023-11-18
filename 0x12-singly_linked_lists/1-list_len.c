#include "lists.h"
#include <stdio.h>
/**
 * list_len - checks the number of elements linked
 * @h: the header of the linked list
 * Return: the number of linked nodes
 */
size_t list_len(const list_t *h)
{
	size_t node_length;

	node_length = 0;
	while (h != NULL)
	{
		node_length++;
		h = h->next;
	}
	return (node_length);
}
