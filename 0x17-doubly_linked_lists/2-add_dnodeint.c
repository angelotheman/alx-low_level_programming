#include "lists.h"

/**
  * add_dnodeint - Add's new node to the beginning
  * @head: Pointer to the head of node
  * @n: Node data to be added
  *
  * Return: Address of new element
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	/* Create the node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* insert at beginning */
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
