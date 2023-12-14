#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the begining of a list
*/
void free_listint(listint_t *head)
{
listint_t *temp, *nextnode;
if (head == NULL)
{
return;
}
temp = head;
while (temp != NULL)
{
nextnode = temp->next;
free(temp);
temp = nextnode;
}
}
