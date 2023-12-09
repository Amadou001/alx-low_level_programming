#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: the input list
 * Return: the number of element printed
*/
size_t print_list(const list_t *h)
{
size_t counter = 0;
if (h == NULL)
{
printf("[0] (nil)\n");
}
while (h != NULL)
{
printf("[%u] %s\n", h->len, h->str);
h = h->next;
counter++;
}
return (counter);
}
