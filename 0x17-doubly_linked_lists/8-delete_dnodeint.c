#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a specific location
 * @head: pointer a pointer to the first node
 * @index: the index or location
 * Return: 1 in success or -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *prev, *next;
unsigned int length = 0, i = 0;
if (*head == NULL)
{
return (-1);
}
temp = *head;
while (temp != NULL)
{
temp = temp->next;
length++;
}
if (index >= length)
{
return (-1);
}
temp = *head;
if (index == 0)
{
*head = temp->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(temp);
return (1);
}
temp = *head;
while (i != index)
{
temp = temp->next;
i++;
}
prev = temp->prev;
prev->next = temp->next;
if (temp->next != NULL)
{
next = temp->next;
next->prev = prev;
}
free(temp);
return (1);
}
