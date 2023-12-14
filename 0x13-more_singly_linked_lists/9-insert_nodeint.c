#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the begining of the list
 * @idx: the position at which the node should be inserted
 * @n: the data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *temp;
unsigned int i = 0;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
if (*head == NULL)
{
newnode->next = NULL;
*head = newnode;
return (*head);
}
temp = *head;
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL)
{
return (NULL);
}
newnode->next = temp->next;
temp->next = newnode;
return (newnode);
}
