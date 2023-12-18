#include "main.h"
/**
 * get_endianness - int get_endianness(void);
 * Return: (1) for little endian or (0) for big endian
*/
int get_endianness(void)
{
unsigned int t_value = 1;
unsigned char *b_ptr = (unsigned char *)&t_value;
if (*b_ptr == 1)
{
return (1);
}
else
{
return (0);
}
}
