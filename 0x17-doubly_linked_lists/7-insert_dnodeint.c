#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the pointer to the first node of the list
 * @idx: the index
 * @n: data of the new node
 * Return: the address of the new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *new_node;
unsigned int i = 0, length = 0;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node ==  NULL)
{
return (NULL);
}
if (*h == NULL || idx == 0)
{
new_node->n = n;
new_node->prev = NULL;
new_node->next = *h;
*h = new_node;
return (new_node);
}
temp = *h;
while (temp != NULL)
{
temp = temp->next;
length++;
}
if (idx >= length)
{
free(new_node);
return (NULL);
}
temp = *h;
while (i != idx)
{
temp = temp->next;
i++;
}
new_node->n = n;
new_node->next = temp;
new_node->prev = temp->prev;
temp->prev = new_node;
return (new_node);
}
