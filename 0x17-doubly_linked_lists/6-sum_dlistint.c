#include "lists.h"
/**
 * sum_dlistint - finds the sum of all nodes in the list
 * @head: first node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
