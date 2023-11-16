# include "main.h"
/**
 * factorial - calculate the factorial of a given number
 * @n: the input number
 * Return: the factorial of the number
*/

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
