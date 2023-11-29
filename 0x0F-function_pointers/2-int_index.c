#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: the array in which to look for
 * @size: size of the array
 * @cmp: a function pointer
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
}
}
return (-1);
}
