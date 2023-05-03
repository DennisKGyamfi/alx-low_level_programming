#include "lists.h"

/**
* sum_listint - calculates the sum of all data in list
* @head: first element(node) in the linked list
*
* Return: sum
*/

int sum_listint(listint_t *head)
{
int add = 0;
listint_t *tem = head;

while (tem)
{
add += tem->n;
tem = tem->next;
}

return (add);
}
