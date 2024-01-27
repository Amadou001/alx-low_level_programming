#include "lists.h"
/**
 * print_dlistint - prints the element of a doubly linked list
 * @h: pointer to the list
 * Return: the number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp;
size_t number_nodes = 0;
temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
number_nodes++;
}
return (number_nodes);
}
