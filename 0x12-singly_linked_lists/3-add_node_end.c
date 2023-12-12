#include "lists.h"
/**
 * add_node_end - add a node at the end of the linked list
 * @head: the input list
 * @str: the string of the new node
 * Return: the address of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *temp;
newnode = (list_t *)malloc(sizeof(list_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->str = strdup(str);
newnode->len = strlen(str);
newnode->next = NULL;
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
return (newnode);
}
