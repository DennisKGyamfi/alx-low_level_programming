#include "lists.h"

/**
* add_nodeint_end - adds node at the end of linked list
* @head: address of first element in the list
* @n: data to to add to the new element
*
* Return: address of new node(success), or NULL(fails)
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *newlist;
listint_t *temp = *head;

newlist = malloc(sizeof(listint_t));
if (!newlist)
return (NULL);

newlist->n = n;
newlist->next = NULL;

if (*head == NULL)
{
*head = newlist;
return (newlist);
}

while (temp->next)
temp = temp->next;

temp->next = newlist;

return (newlist);
}
