#include "lists.h"

/**
 * add_node - function that adds a new node ata the beginning of a list
 * @head: address of the pointer
 * @str: string value to be added
 * Return: The address of the new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
