#include "lists.h"
#include <string.h>

/**
* print_listint - prints all the elements of a linked list
* @h: the linked list of type listint_t to print
*
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{

size_t number = 0;

while (h)
{
printf("%d\n", h->n);
number++;
h = h->next;
}

return (number);
}
