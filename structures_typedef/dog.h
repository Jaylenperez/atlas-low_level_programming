#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A representation of a dog.
 * @name: The name of the dog.
 * @age: The age of the dog in years.
 * @owner: The owner of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
