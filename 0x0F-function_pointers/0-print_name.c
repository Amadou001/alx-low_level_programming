#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: first input
 * @f: second input which is a function pointer
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
