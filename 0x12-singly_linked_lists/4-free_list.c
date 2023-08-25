#include "lists.h"
#include <stdlib.h>

/**
  * free_list - Deallocate memory allocated
  * @head: Linked list
  *
  */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp;

		temp = head;

		free(temp->str);
		free(temp);
	}
}
