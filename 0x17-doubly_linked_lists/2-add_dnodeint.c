#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginning of the list
 * @head: A ptr to the head of the list
 * @n: an element in list
 * Return: New node (Success) or NULL (fail)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->prev = NULL;
new->next = *head;
new->n = n;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
