#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - like calloc
 * @nmemb: number of members
 * @size: size of each member
 * Return: a string
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
array = malloc(size * nmemb);
if (array == NULL)
{
return (NULL);
}
memset(array, 0, size * nmemb);
return (array);
}
