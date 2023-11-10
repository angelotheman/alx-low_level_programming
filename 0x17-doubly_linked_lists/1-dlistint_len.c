#include "lists.h"

/**
  * dlistint_len - Length of the linked list
  * @h: Head pointer to the node of the list
  *
  * Return: Count of the linked list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
