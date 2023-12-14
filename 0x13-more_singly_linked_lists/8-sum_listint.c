#include "lists.h"
/**
 * sum_listint - does the sum of all the data of a list
 * @head: pointer to the begining of a list
 * Return: the sum of the data of the list
*/
int sum_listint(listint_t *head)
{
listint_t *temp;
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
