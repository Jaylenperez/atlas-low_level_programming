#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure
 *
 * Description: Frees memory allocated for the dog structure including
 * name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
