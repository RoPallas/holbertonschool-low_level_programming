#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: of the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		current = head;
		while (current != NULL)
		{
			if (current->next != NULL)
				current = current->next;
			else
				break;
			sum += current->n;
		}
	}
	return (sum);
}
