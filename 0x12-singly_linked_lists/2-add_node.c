#include "lists.h"

/**
 * add_node - function that adds a new node ata the beginning of a list
 * @head: address of the pointer
 * @str: string value to be added
 * Return: The address of the new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t newchar;
	list_t *newnode;
       
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newmode->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
		;

	newnode->len = newchar;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
