#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Function to print all elements
  * @h: Nodes in the list
  *
  * Return: Count (size_t) of the nodes
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *curr;
	size_t count = 0;

	curr = h;


	while (curr != NULL)
	{
		printf("%u\n", curr->n);
		curr = curr->next;
		count++;
	}

	return (count);
}
