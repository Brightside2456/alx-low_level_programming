#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - print created singly linked list
 * @h: list head
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
