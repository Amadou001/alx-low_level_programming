#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int mul, num1, num2, i, j;
if (argc - 1 != 2)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
exit(98);
}
}
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d\n", mul);
return (0);
}
