#include "lists.h"
/**
 * sum_listint:calculates the sum of all nodes in list
 * @head: the address of the first node
 * Return:the sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while(head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
