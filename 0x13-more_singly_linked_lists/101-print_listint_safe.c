#include "lists.h"

/**
  * print_listint_safe - Print a listint_t
  * @head: args
  *
  * Return: Size
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t index = 0;

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		index++;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			exit(98);
		}
	}

	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		index++;
	}

	return (index);
}
