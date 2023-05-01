#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_int - adds a new node at the beginning of the list
 * @head: address of the previously head node
 * @n: value of the node 
 * Return:the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof (listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
