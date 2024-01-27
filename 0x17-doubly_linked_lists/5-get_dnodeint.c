#include "lists.h"
/**
 * get_dnodeint_at_index - looks for a node at a mentioned index
 * @head: pointer to the first node
 * @index: index of the node
 * Return: the node or NULL if it failed
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int length = 0, i = 0;
if (head == NULL)
{
return (NULL);
}
temp = head;
while (temp != NULL)
{
temp = temp->next;
length++;
}
if (index >= length)
{
return (NULL);
}
temp = head;
while (i != index)
{
temp = temp->next;
i++;
}
return (temp);
}
