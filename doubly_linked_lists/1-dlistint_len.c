#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of a dlistint_t
 *
 * Return: the number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
