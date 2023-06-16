#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of the list
* @head: Ptr to the head of list
* @n: an element in the list
* Return: New element(Success) or NULL(fail)
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *start;

start = *head;
new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

if (*head == NULL)
{
new->next = NULL;
new->n = n;
new->prev = NULL;
*head = new;
return (new);
}

while (start->next)
{
start = start->next;
}

start->next = new;
new->prev = start;
new->next = NULL;
new->n = n;
return (new);
}
