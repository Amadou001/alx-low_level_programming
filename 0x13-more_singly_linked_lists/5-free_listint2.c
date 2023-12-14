#include "lists.h"
/**
 * free_listint2 - frees a list and set head to NULL
 * @head: pointer to the begining of a list
*/
void free_listint2(listint_t **head)
{
listint_t *temp, *nextnode;
if (head == NULL)
{
return;
}
temp = *head;
while (temp != NULL)
{
nextnode = temp->next;
free(temp);
temp = nextnode;
}
*head = NULL;
}
