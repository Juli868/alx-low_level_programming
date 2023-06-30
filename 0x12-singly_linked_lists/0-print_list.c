#include "lists.h"
/**
 * print_list - will display all nodes included in the list
 * @h: first node address
 * Return: total number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}
	return (counter);
}
