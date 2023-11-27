#include "dog.h"
/**
 * init_dog - initialize a variable of type stuct dog
 * @dog: first input
 * @name: second input
 * @age: third input
 * @owner: fourth input
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
