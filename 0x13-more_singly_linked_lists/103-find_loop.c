#include "lists.h"

/**
* find_listint_loop - finds loop in linked list
* @head: linked list to locate
*
* Return: ptr to node where loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *star = head;
listint_t *moon = head;

if (!head)
return (NULL);

while (star && moon && moon->next)
{
moon = moon->next->next;
star = star->next;
if (moon == star)
{
star = head;
while (star != moon)
{
star = star->next;
moon = moon->next;
}
return (moon);
}
}

return (NULL);
}
