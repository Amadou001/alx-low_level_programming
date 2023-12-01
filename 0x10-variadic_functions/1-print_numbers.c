#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: the character to print between the numbers
 * @n: number of values to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
if (separator == NULL)
{
return;
}
for (i = 0; i < n - 1; i++)
{
printf("%d%s", va_arg(args, int), separator);
}
printf("%d", va_arg(args, int));
va_end(args);
printf("\n");
}
