#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the number given in decimal
 * @index: index of the value to be printed
 * Return: the value to the corresponding index
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
n >>= index;
return (n & 1);
}
