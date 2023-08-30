#include "lists.h"

/**
  * delete_nodeint_at_index - Delete node at index
  * @head: Node for deletion
  * @index: Index for deletion
  *
  * Return: Deleted node
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/**
	  index 3.
	  */
	listint_t *curr;
	listint_t *temp;

	unsigned int count = 0;

	curr = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	while (curr)
	{
		if (count == index - 1)
		{
			temp = curr->next;

			if (temp == NULL)
				return (-1);

			curr->next = temp->next;
			free(temp);
			return (1);
		}

		count++;
		curr = curr->next;
	}

	return (-1);
}
