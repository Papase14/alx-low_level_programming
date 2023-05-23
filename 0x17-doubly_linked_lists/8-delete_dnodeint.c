#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes node at index index of list.
  * @head: double pointer to list.
  * @index: index of node to be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */
 int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) 
 {
    if (*head == NULL)
        return -1;  // Failed: Empty list

    dlistint_t *current = *head;

    // Special case: If index is 0, delete the head
    if (index == 0) {
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return 1;  // Success
    }
    
    // Traverse to the node at the given index
    unsigned int i;
    for (i = 0; i < index; i++) {
        if (current->next == NULL) {
            return -1;  // Failed: Index out of range
        }
        current = current->next;
    }
    
    // Update the previous and next pointers to remove the node
    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    
    free(current);
    return 1;  // Success
}