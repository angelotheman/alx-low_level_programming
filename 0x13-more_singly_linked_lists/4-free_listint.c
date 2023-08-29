#include "lists.h"

/**
  * free_listint - Free everything else
  * @head: The nodes in your list
  *
  */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
