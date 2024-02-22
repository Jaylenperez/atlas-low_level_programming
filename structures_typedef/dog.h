#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A representation of a dog.
 * @name: The name of the dog.
 * @age: The age of the dog in years.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif
