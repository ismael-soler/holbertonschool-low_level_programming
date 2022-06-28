#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - calls for dog structure
 * @d: pointer to my_dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return:  pointer to my_dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
