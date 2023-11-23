#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters of s2
 * Return: the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *array;
unsigned int i, j, len1, len2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
array = (char *)malloc(len1 + n + 1);
if (array == NULL)
{
return (NULL);
}
for (i = 0 ; i < len1; i++)
{
array[i] = s1[i];
}
for (j = 0; j < n; j++)
{
array[i + j] = s2[j];
}
array[i + j] = '\0';
return (array);
}
