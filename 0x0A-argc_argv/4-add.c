# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
/**
* main - prints the name of the program
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc - 1 == 0)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
if (!isdigit(argv[i]))
{
printf("Error\n");
return (1);
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
