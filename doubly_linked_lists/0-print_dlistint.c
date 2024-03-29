#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of a dlistint_t list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
