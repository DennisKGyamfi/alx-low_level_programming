#include "lists.h"

/**
* get_nodeint_at_index - returns node at an index in a linked list
* @head: first node in the linked list
* @index: index of the element(node) to return
*
* Return: ptr to element(node), or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int ele;

for (ele = 0; ele < index; ele++)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);

}
