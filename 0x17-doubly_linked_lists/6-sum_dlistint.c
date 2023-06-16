#include "lists.h"

/**
* sum_dlistint - The Sum of elements in list
* @head: The head of the list
* Return: Sum of total data
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
