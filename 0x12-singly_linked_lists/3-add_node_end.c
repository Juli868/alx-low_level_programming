#include "lists.h"
/**
 * add_node_end - will add a new node at the end
 * @head: address of the firs node
 * @str: string to add
 * Return: address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *temp;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return(NULL);
	while(*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
	}
	temp->next = new_n;
	new_n->str = strdup(str);
	new_n->next = NULL;
	return (new_n);
}
