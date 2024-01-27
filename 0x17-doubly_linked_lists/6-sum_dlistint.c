#include "lists.h"
/**
 * sum_dlistint - performs the summation of list's data
 * @head: pointer to the first node
 * Return: 0 if the list is empty otherwise the sum of the data
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum = 0;
if (head == NULL)
{
return (0);
}
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
