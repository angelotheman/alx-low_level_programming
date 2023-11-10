#include "lists.h"

/**
  * add_dnodeint_end - Adds node to the end of the linked list
  * @head: The head pointer of the node
  * @n: The data in the node
  *
  * Return: Address of the new node
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	curr = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (curr->next != NULL)
			curr = curr->next;

		curr->next = new_node;
		new_node->prev = curr;
	}

	return (new_node);
}
