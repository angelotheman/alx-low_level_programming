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
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr = *head;

	while (curr)
	{
		if (count == idx - 1)
		{
			new_node->next = curr->next;
			new_node->prev = curr;
			curr->next = new_node;
			curr->next->prev = new_node;
			return (new_node);
		}
		count++;
		curr = curr->next;
	}

	free(new_node);
	return (NULL);
}
