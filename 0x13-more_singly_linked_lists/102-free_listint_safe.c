#include "lists.h"

/**
* free_listint_safe - frees a linked list
* @h: ptr to the first node in linked list
*
* Return: number of elements in freed list
*/

size_t free_listint_safe(listint_t **h)
{
size_t flen = 0;
int dift;
listint_t *tem;

if (!h || !*h)
return (0);

while (*h)
{
dift = *h - (*h)->next;
if (dift > 0)
{
tem = (*h)->next;
free(*h);
*h = tem;
flen++;
}
else
{
free(*h);
*h = NULL;
flen++;
break;
}
}

*h = NULL;

return (flen);
}
