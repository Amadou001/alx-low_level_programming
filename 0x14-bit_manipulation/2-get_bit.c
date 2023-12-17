#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the number given in decimal
 * @index: index of the value to be printed
 * Return: the value to the corresponding index
*/
int get_bit(unsigned long int n, unsigned int index)
{
int *convert;
int result = 0;
convert = binary(n);
if (index > 32)
{
free(convert);
return (-1);
}
if (convert == NULL)
{
return (-1);
}
result = convert[index];
return (result);
}
/**
 * binary - converts the number in binary form
 * @n: the number to be converted
 * Return: the binary form of the number
*/
int *binary(unsigned long int n)
{
int *b1, *b2;
int i = 0, j, temp = 0;
b1 = (int *)malloc(sizeof(int) * 32);
if (b1 == NULL)
{
return (NULL);
}
while (n > 0)
{
b1[i] = n % 2;
n = n / 2;
i++;
}
b2 = (int *)malloc(sizeof(int) * 32);
if (b2 == NULL)
{
free(b1);
return (NULL);
}
temp = i - 1;
for (j = 0; j <= temp; j++)
{
b2[j] = b1[temp - j];
}
free(b1);
return (b2);
}
