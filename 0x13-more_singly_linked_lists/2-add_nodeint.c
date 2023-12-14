#include "lists.h"
/**
 * add_nodeint - adds a node at the begining of a list
 * @head: pointer to the begining of the list
 * @n: the data of the new node
 * Return: the address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (*head);
}
