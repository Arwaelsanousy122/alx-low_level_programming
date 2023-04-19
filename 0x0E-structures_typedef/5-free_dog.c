#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that frees dogs.
 *
 * @d: parameter
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
