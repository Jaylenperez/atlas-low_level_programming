#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog in years.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return NULL;

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		if (new_dog->name)
			free(new_dog->name);
		if (new_dog->owner)
			free(new_dog->owner);
		free(new_dog);
		return NULL;
	}

	new_dog->age = age;

	return (new_dog);
}
