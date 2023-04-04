#include "lists.h"

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
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = *h;
	while (count < idx - 1)
	{
		if (current->next != NULL)
		{
			current = current->next;
			count++;
		}
		else
		{
			return (NULL);
		}
	}
	new->prev = current;
	new->next = current->next;
	current->next = new;
	current = new->next;
	current->prev = new;
	return (new);
}
