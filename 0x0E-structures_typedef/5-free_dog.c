#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory
 * @d: input
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
f0ree(d);
}
}
