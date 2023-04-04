#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: of the list
 * @index: of the node
 *
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		current_node = head;
		while (count < index)
		{
			if (current_node->next != NULL)
			{
				current_node = current_node->next;
				count++;
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (current_node);
}
