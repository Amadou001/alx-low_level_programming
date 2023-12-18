#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned integer
 * @index: the index of the bit to change to 1
 * Return: (1) if it succeed or (-1) if it failled
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}
