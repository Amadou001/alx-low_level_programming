#include "lists.h"
/**
 * list_len - count the number of elements in a linked list
 * @h: the input list
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
