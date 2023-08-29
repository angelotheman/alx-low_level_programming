#include "lists.h"

/**
  * add_nodeint_end - Add a new node to the end
  * @head: Pointer to the node
  * @n: Data in the node
  *
  * Return: Address of the new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr = *head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		curr->next = new_node;
	}

	return (new_node);
}
