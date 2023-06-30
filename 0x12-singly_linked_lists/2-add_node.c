#include "lists.h"
#include <string.h>
/**
 * add_node - will add a new node at the beginning of the list
 * @head: first element of the list
 * @str: string to add
 * Return: pointer to the newly added head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h;

	new_h = malloc(sizeof(list_t));
	if (new_h == NULL)
		return (NULL);
	new_h->len = strlen(str);
	new_h->str = strdup(str);
	new_h->next = *head;
	*head = new_h;
	return (new_h);
}
