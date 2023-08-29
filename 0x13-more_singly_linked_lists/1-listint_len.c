#include "lists.h"

/**
  * listint_len - Return number of elements in the list
  * @h: The node in the list
  *
  * Return: Number of elements in the list
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr;

	curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}
