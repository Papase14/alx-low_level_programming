#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t list;

	list = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}
	return (list);
}
