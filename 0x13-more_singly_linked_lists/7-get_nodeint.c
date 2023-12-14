#include "lists.h"
/**
 * get_nodeint_at_index - look for a node at a given position
 * @head: pointer to the begining of a list
 * @index: the position of the node
 * Return: the node at that position
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i = 0;
temp = head;
while (i < index)
{
temp = temp->next;
i++;
}
if (temp == NULL)
{
return (NULL);
}
return (temp);
}
