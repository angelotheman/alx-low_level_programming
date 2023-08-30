#include "lists.h"

/**
  * reverse_listint - Reverse a linked list
  * @head: Linked List
  *
  * Return: The linked list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr	= *head;
	listint_t *next;

	if (*head == NULL)
		return (NULL);

	while (curr != NULL)
	{
		next = curr->next;

		curr->next = prev;

		prev = curr;
		curr = next;
	}

	*head = prev;

	return (*head);
}
