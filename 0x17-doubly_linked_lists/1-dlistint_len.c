#include "lists.h"

/**
 * dlistint_len - Counts number of elements in a linked list
 * @h: head of list
 * Return: The Number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
int j = 0;

for (j = 0; h; j++)
{
len += 1;
h = h->next;
}
return (len);
}
