#include "lists.h"

/**
* listint_len - returns the number of elements in linked list
* @h: linked list to output
*
* Return: number of elements(nodes)
*/

size_t listint_len(const listint_t *h)
{

size_t number = 0;

while (h)
{
number++;
h = h->next;

}

return (number);
}
