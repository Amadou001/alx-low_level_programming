#include "hash_tables.h"
/**
 * hash_djb2 -  hash function implementing the djb2 algorithm
 * @str: input string
 * Return: hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int A = 0;
if (str == NULL)
{
exit(EXIT_FAILURE);
}
while ((A = *str))
{
hash = hash * 33 + A;
str++;
}
return (hash);
}
