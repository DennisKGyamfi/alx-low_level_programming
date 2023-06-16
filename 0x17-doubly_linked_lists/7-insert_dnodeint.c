#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node list at a given position
* @h: Ptr to the head of the list
* @idx: Position for new node to be inserted
* @n: Integer of new node
* Return: Address of the new node(Success) or NULL (fail)
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *new;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}

if (tmp->next == NULL)
return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;
return (new);
}
