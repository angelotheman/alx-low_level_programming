#include "lists.h"

/**
  * pop_listint - Deletes the head node and return it's data
  * @head: Head node
  *
  * Return: 0 if empty or otherwise
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	curr = *head;
	*head = (*head)->next;
	free(curr);

	return (data);
}
