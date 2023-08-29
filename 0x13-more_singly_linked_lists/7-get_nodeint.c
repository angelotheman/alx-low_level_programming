#include "lists.h"

/**
  * get_nodeint_at_index - Returns the nth node
  * @head: Args
  * @index: Index of node
  *
  * Return: 0 Success
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		count++;

		if (count == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
