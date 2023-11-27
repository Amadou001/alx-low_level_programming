#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type stuct dog
 * @d: first input
 * @name: second input
 * @age: third input
 * @owner: fourth input
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = (struct dog *)calloc(3,sizeof(struct dog));
if (d != NULL)
{
d->name = strdup(name);
d->age = age;
d->owner = strdup(owner);
}
}
