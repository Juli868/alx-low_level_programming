#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - will work to the end until it shows all elements of the list
 * @h: the pointer to use for knowing the next element
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		number++;
		h = h->next;
	}
	return (number);
}
