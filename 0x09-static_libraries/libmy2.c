#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if it's upper
 * @c: input number
*/

void _isupper(int c)
{
}
/**
 * _isdigit - checks if it's a digit
 * @c: input number
*/
void _isdigit(int c)
{
}
/**
 * _strlen - determine the length of a string
 * @s: input string
*/
void _strlen(char *s)
{
}
/**
 * _puts - displays a string
 * @s: input string
*/
void _puts(char *s)
{
if (*s == '\0')
{
return;
}
putchar(*s);
_puts(s + 1);
}
/**
 * _strcpy - copy a string into another
 * @dest: string receving the copy
 * @src: string to be copied
*/
void *_strcpy(char *dest, char *src)
{
}
