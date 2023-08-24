#include "lists.h"
#include <stdio.h>

/**
  * print_list - Prints each element in linked list
  * @h: Args of type struct list
  *
  * Return: size of object
  */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	const list_t *curr;

	curr = h;

	while (curr != NULL)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", curr->len, curr->str);

		count++;
		curr = curr->next;
	}

	return (count);
}
