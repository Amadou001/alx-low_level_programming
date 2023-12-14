#include "lists.h"
/**
 * listint_len - counts the number of elements of a list
 * @h: pointer to the begining of a list
 * Return: the number of elements
*/
size_t listint_len(const listint_t *h)
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
temp = temp->next;
number++;
}
return (number);
}
