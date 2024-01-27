#include "lists.h"

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
