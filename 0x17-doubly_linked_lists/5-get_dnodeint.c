#include "lists.h"

/**
  * get_dnodeint_at_index - Get's node at index
  * @head: Pointer to head of linkedlist
  * @index: Index to return node
  *
  * Return: Node at index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}

	return (NULL);
}
