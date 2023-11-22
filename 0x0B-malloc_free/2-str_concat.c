#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: the combination of the two strings
*/
char *str_concat(char *s1, char *s2)
{
size_t len1, len2, lentotal;
char *string;
if (s1 == NULL)
{
s1 ="";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
lentotal = len1 + len2 + 1;
string = (char *)malloc(sizeof(char) * lentotal);
if (string == NULL)
{
return (NULL);
}
strcpy(string, s1);
strcat(string, s2);

return (string);
}
