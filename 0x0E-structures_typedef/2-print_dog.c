#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the element of a structure
 * @d: the input
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf(" ");
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
if (d->owner == NULL)
{
printf("Owner: (nil)");
}
printf("%s\n", d->name);
printf("%f\n", d->age);
printf("%s\n", d->owner);
}
