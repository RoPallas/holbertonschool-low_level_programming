#include "lists.h"
#include <string.h>


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: of a list_t
 * @str: string to duplicate
 *
 * Return: the adress of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
