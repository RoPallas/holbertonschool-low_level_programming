#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: head of a list_t
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
