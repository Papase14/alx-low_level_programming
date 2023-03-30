#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list
 * @h: singly linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t newvalue = 0;

	while (h != NULL)
	{
		h = h->next;
		newvalue++;
	} return (newvalue);
}
