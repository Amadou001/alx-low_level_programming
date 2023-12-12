#include "lists.h"
/**
 * add_node - add a node at the begining of a linked list
 * @head: pointer pointing to the list
 * @str: string to put in the new node
 * Return: the address of the new node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
newnode = (list_t *)malloc(sizeof(list_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->len = strlen(str);
newnode->next = *head;
*head = newnode;
return (*head);
}
