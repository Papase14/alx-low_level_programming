#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head node
 * @n: integer new node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *tmp;
    if (head == NULL)
        return (NULL);

    tmp = *head;
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = tmp;
    *head = new_node;
    return (new_node);
}
