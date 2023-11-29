#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given
 *  as a parameter on each element of an array
 * @array: first input
 * @size: second input
 * @action: third input which is a function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
