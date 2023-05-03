#include "lists.h"

/**
* reverse_listint - reverses linked list
* @head: ptr to first node in the list
*
* Return: ptr to the first node in new list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *pre = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = next;
}

*head = pre;

return (*head);
}
