#include "lists.h"
/**
 * pop_listint - frees the first node of a list
 * @head: pointer to the begining of a list
 * Return: the head's data
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL)
{
return (0);
}
n = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (n);
}
