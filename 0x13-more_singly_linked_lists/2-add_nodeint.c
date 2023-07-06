#include"lists.h"
/**
 * add_nodeint - add a new node at the top of the list
 * @head: firs node in the list
 * @n:  value of the node
 * Return: address of the new created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->next = *head;
	*head = nd;
	return (nd);
}
