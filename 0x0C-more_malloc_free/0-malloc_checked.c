#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - memory allocution
 * @b: input size
 * Return: the created array
*/

void *malloc_checked(unsigned int b)
{
char *array;
array = (char *)malloc(sizeof(array) * b);
if (array == NULL)
{
exit(98);
}
return (array);
}
