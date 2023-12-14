#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to the begining of the list
 * @index: position of the node to delete
 * Return: (1) if it succeded or (-1) if if failled
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prevnode;
unsigned int i = 0;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
return (1);
}
temp = *head;
while (temp != NULL && i < index)
{
prevnode = temp; /*to get the previous node before temp.*/
temp = temp->next;
i++;
}
if (temp == NULL)
{
return (-1);
}
prevnode->next = temp->next;
free(temp);
return (1);
}
