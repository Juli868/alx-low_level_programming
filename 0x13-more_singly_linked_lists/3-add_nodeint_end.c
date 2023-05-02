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
	listint_t *temp_add, *new_add;

	new_add = malloc(sizeof(listint_t));
	if (new_add == NULL)
		return (NULL);
	new_add->n = n;
	new_add->next = NULL;
	if (*head == NULL)
		*head = new_add;
	else
	{
		temp_add = *head;
		while (temp_add->next != NULL)
			temp_add = temp_add->next;
		temp_add->next = new_add;
	}
	return (*head);
}
