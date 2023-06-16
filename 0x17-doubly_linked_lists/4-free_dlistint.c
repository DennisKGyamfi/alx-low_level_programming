#include "lists.h"

/**
* free_dlistint - Frees linked list
* @head: Head of list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
