#include "lists.h"

/**
  * free_listint - Free everything else
  * @head: The nodes in your list
  *
  */

void free_listint(listint_t *head)
{
	listint_t *curr, next;

	curr = head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->n);
		free(curr);
		curr = next;
	}
}
