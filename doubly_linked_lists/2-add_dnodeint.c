#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: pointer to head of the dlist
 * @n: of the node to add
 *
 * Return: the address of the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	current_node = *head;
	current_node->prev = new_node;
	*head = new_node;
	return (new_node);
}
