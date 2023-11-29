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
int end = 0;
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
end = cmp(array[i]);
if (end != 0)
{
break;
}
}
if (end == 0)
{
return (-1);
}
return (end);
}
