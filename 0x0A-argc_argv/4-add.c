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
int i, j, sum = 0;
if (argc == 0)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
