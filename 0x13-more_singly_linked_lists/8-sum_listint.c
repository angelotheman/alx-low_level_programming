#include "lists.h"

/**
  * sum_listint - Sum of all data
  * @head: Node in the list
  *
  * Return: Sum of data or 0 if empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
