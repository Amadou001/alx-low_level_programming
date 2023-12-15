#include "main.h"
/**
 * _putchar - like putchar
 * @c: input character
 * Return: the number of character printed
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
