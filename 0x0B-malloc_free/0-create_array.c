#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of the array
 * @c: content of the array
 * Return: the array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
