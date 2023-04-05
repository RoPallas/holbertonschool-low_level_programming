#include "lists.h"


dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: index where the new node should be added.
 * @n: data of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = get_dnodeint_at_index(*h, idx - 1);
	if (current == NULL)
		return (NULL);
	new->prev = current;
	new->next = current->next;
	current->next = new;
	current = new->next;
	current->prev = new;
	return (new);
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
