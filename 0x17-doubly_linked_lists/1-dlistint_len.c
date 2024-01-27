#include "lists.h"
/**
 * dlistint_len - determines the length of doubly linked list
 * @h: pointer to the doubly linked list
 * Return: the length of linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp;
size_t number_elements = 0;
temp = h;
while (temp != NULL)
{
temp = temp->next;
number_elements++;
}
return (number_elements);
}
