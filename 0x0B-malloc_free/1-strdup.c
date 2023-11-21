#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - like strdup
 * @str: input string
 * Return: a duplicated string
*/

char *_strdup(char *str)
{
char *array;
if (str == NULL)
{
return (NULL);
}
array = (char *)malloc(sizeof(char) * sizeof(str));
if (array == NULL)
{
return (NULL);
}
strcpy(array, str);
return (array);
}
