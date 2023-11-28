#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: first input
 * @age: second input
 * @owner: third input
 * Return: the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
size_t len1, len2;
d = (dog_t *)malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
len1 = strlen(name);
len2 = strlen(owner);
d->name = malloc(sizeof(char) * (len1 + 1));
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * (len2 + 1));
if (d->owner == NULL)
{
free(d);
free(d->name);
return (NULL);
}
strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;
return (d);
}
