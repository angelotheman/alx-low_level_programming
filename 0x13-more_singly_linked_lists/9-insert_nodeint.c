#include "lists.h"

/**
  * insert_nodeint_at_index - Insert at a given position
  * @head: Node args
  * @idx: Index to place position at
  * @n: Data to be placed
  *
  * Return: Address of node or NULL otherwise
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *curr;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

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
			curr->next = new_node;
			return (new_node);
		}
		count++;
		curr = curr->next;
	}

	free(new_node);
	return (NULL);
}
