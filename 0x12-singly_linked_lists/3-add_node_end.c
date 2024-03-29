#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add a node to the end of another node
 * @head: pointer that points to the head of the list node
 * @str: string value
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *end;

	first = malloc(sizeof(list_t));

	if (first == NULL)
		return (NULL);
	first->str = strdup(str);
	if (first->str == NULL)
	{
		free(first);
		return (NULL);
	}

	first->len = strlen(str);
	first->next = NULL;

	if (*head == NULL)
		*head = first;
	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = first;
	}
	return (first);
}
