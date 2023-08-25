#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - Adds node to the end
  * @head: Linked list
  * @str: Data to be added
  *
  * Return: List with new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr = *head;

		while (curr->next != NULL)
			curr = curr->next;

		curr->next = new_node;
	}

	return (new_node);
}
