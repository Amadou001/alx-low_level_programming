#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer the string
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
const char *temp;
int i = 0;
unsigned int result = 0;
temp = b;
if (temp == NULL)
{
return (0);
}
while (*(temp + i) != '\0')
{
if (*(temp + i) != '0' && *(temp + i) != '1')
{
return (0);
}
result <<= 1;
result += *(temp + i) - '0';
i++;
}
return (result);
}
