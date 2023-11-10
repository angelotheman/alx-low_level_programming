#include "lists.h"

/**
  * insert_dnodeint_at_index - Insert node at position
  * @h: Head pointer to the linked list
  * @idx: Position of insertion
  * @n: Node data to be inserted
  *
  * Return: Address of new node, otherwise NULL
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr;

	curr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
		idx--;
	}

	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = curr->next;
	new_node->prev = curr;
	curr->next = new_node;
	curr->next->prev = new_node;

	return (new_node);
}
