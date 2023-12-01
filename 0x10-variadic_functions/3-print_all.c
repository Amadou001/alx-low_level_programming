#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: specifies the format to print.
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *separator = "";
va_list args;
va_start(args, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f",separator, va_arg(args, double));
break;
case 's':
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
printf("%s%s", separator, str);
}
default:
break;
}
separator = ", ";
i++;
}
}
va_end(args);
printf("\n");
}
