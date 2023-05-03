#include "lists.h"

/**
* insert_nodeint_at_index - inserts new node in linked list,
* at a given position
* @head: ptr to first node in the list
* @idx: index where the new node is added
* @n: data to insert new node
*
* Return: ptr to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *tem = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; tem && i < idx; i++)
{
if (i == idx - 1)
{
new_node->next = tem->next;
tem->next = new_node;
return (new_node);
}
else
tem = tem->next;
}

return (NULL);
}
