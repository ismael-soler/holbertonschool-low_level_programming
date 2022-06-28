#include "dog.h"
#include <stdlib.h>

/**
 * free_dog  - frees some dogs anashie
 * @d: pointer
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
