#include "lists.h"

/**
 * print_dlistint - Prints all elements of the list
 * @h: Head of list
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
int j;
size_t len = 0;

for (j = 0; h; j++)
{
printf("%d\n", h->n);
h = h->next;
len++;
}
return (len);
}
