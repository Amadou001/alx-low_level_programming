#include "lists.h"
/**
 * print_listint - prints the elements of a list
 * @h: pointer to the begining of a list
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
const listint_t *temp;
size_t number = 0;
if (h == NULL)
{
return (0);
}
temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
number++;
}
return (number);
}
