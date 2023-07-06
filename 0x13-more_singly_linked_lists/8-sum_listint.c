#include "lists.h"
/**
 * sum_listint - will calculate the sum of all nodes
 * @head:first node
 * Return: the calculated sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
