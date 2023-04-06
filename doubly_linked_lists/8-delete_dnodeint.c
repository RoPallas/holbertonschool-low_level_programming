#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/**
 * delete_dnodeint_at_index - deletes the node at the index of a list
 * @head: of a list
 * @index: to deletes
 *
 * Return: 1 on success, -1 on failiure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_delete;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		to_delete = *head;
		*head = to_delete->next;
		if (head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		to_delete = get_dnodeint_at_index(*head, index);
		if (to_delete == NULL)
			return (-1);
		if (to_delete->next)
			(to_delete->next)->prev = to_delete->prev;
		(to_delete->prev)->next = to_delete->next;
	}
	free(to_delete);
	return (1);
}
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
