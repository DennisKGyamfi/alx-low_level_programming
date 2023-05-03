#include "lists.h"

/**
* add_nodeint - adds new node at the beginning of a linked list
* @head: ptr to the first node in the list
* @n: data to add to the new node
*
* Return: ptr to the new node(success), or NULL(fails)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *newlist;

newlist = malloc(sizeof(listint_t));
if (!newlist)
return (NULL);

newlist->n = n;
newlist->next = *head;
*head = newlist;

return (newlist);
}
