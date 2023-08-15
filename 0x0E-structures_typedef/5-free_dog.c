#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees malloc to struct dog
 * @d: dog instance
 */
void free_dogs(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
