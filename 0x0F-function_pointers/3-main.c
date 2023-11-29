#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of a simple operation
 * @argc: number of arguments
 * @argv: strings of arguments
 * Return: (0) in success.
*/
int main(int argc, char *argv[])
{
int num1, num2;
char *op;
op = argv[2];
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (!get_op_func(op))
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(argv[2])(num1, num2));
return (0);
}
