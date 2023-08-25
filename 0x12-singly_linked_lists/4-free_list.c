#include "lists.h"
#include <stdlib.h>

/**
  * free_list - Deallocate memory allocated
  * @head: Linked list
  *
  */

void free_list(list_t *head)
{
	list_t *curr, *next;

	curr = head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
}
