#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the begining of a list
 * @n: data of the new node
 * Return: the address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *temp;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
newnode->next = NULL;
newnode->n = n;
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
return (newnode);
}
