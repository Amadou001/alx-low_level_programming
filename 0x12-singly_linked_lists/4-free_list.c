#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to the list
*/
void free_list(list_t *head)
{
list_t *temp, *nexnode;
if (head == NULL)
{
return;
}
temp = head;
while (temp != NULL)
{
nexnode = temp->next;
free(temp->str);
free(temp);
temp = nexnode;
}
}
