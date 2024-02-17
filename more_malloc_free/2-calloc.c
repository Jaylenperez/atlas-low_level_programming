#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Check for zero values */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculates total size to allocate */
	total_size = nmemb * size;

	/* Allocate memory */
	ptr = malloc(total_size);

	/* Check for malloc failure */
	if (ptr == NULL)
		return (NULL);

	/* Set allocated memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}
