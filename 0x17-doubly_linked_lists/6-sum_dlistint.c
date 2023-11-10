#include "lists.h"

/**
  * sum_dlistint - Calculates the sum of data
  * @head: Head pointer to the head of linked list
  *
  * Return: Sum of linked list data
  */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
