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

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (*head)
	{
		if (count = idx - 1)
		{
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		count++;
		*head = (*head)->next;
	}
}
