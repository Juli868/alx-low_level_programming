#include "lists.h"
/**
 * add_node_end - will add a new node at the end
 * @head: address of the firs node
 * @str: string to add
 * Return: address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *temp;

	new_n = malloc(sizeof(list_t));
	temp = *head;
	if (new_n == NULL)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = strlen(str);
	new_n->next = NULL;
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	while (temp->next)
	{
		temp = (temp)->next;
	}
	temp->next = new_n;
	return (new_n);
}
