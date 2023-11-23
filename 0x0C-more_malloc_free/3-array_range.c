#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers in order
 * @min: least element in the array
 * @max: biggest element in the array
 * Return: an array of ordered integers
*/
int *array_range(int min, int max)
{
int *array;
int i, j;
if (min > max)
{
return (NULL);
}
array = (int *)malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
{
return (NULL);
}
i = 0;
j = min;
while (i <= max - min)
{
array[i] = j;
i++;
j++;
}
return (array);
}
