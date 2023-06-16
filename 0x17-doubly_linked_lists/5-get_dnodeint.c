#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of linked list
 * @head: Head of linked list
 * @index: Node index to return
 * Return: Node by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int u;

for (u = 0; u < index && head->next; u++)
{
head = head->next;
}
if (u < index)
return (NULL);
return (head);
}
