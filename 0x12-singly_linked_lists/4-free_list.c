#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free a list_t type list
 * @head: the head pointer of a list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
