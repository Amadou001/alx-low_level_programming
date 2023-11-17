#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the name of the program
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int num1, num2, mul;
if (argc - 1 != 2)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d\n", mul);
return (0);
}
