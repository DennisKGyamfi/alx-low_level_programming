#include "lists.h"


size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - Counts the number of nodes
* linked list.
* @head: ptr to the head of the list.
*
* Return: 0 (If the list is not looped).
* else - the number of nodes in list.
*/

size_t looped_listint_len(const listint_t *head)
{
const listint_t *tort, *hare;
size_t node = 1;

if (head == NULL || head->next == NULL)
return (0);

tort = head->next;
hare = (head->next)->next;

while (hare)
{
if (tort == hare)
{
tort = head;
while (tort != hare)
{
node++;
tort = tort->next;
hare = hare->next;
}

tort = tort->next;
while (tort != hare)
{
node++;
tort = tort->next;
}

return (node);
}

tort = tort->next;
hare = (hare->next)->next;
}

return (0);
}

/**
* print_listint_safe - Print list.
* @head: A ptr to the head of the list.
*
* Return: number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{

size_t node, index = 0;

node = looped_listint_len(head);

if (node == 0)
{
for (; head != NULL; node++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < node; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (node);
}
