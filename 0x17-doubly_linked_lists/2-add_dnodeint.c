#include "lists.h"
/**
 * add_dnodeint - adds a new node in doubly linked list
 * @head: pointer to the beginning of the list
 * @n: the data of the new node
 * Return: the address of the new node or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
