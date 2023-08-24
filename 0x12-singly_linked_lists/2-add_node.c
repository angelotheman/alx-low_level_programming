#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node - Adds data to the beginning of the list
  * @head: Linked list
  * @str: Data to be added
  *
  * Return: List with new node added
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
