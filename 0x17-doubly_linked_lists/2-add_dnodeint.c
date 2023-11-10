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

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
