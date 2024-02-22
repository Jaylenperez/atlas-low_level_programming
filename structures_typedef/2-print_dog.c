#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the information of a dog
 * @d: pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
