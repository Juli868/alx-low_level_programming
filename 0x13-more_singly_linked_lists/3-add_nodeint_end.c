#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint_end - adds a new node at theend of the list
 *@head: first element of the of the list
 *@n: value to add to the list
 *Return: the address of the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_add;
	listint_t *new_add;

	new_add = malloc(sizeof(listint_t));
	new_add->n = n;
	new_add->next = NULL;
	temp_add = *head;
	while (temp_add)
	{
		if (temp_add->next == NULL)
		{
			temp_add->next = new_add;
			return (new_add);
		}
		temp_add = temp_add->next;
	}
	return (NULL);
}
