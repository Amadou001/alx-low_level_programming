#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the first node of the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
if (head == NULL)
{
return;
}
temp = head;
while (temp != NULL)
{
free(temp);
temp = temp->next;
}
}
