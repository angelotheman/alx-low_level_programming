#include "lists.h"

/**
  * free_dlistint - Free the doubly linked list
  * @head: Head pointer to the list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
