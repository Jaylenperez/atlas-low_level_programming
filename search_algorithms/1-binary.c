#include search_algos.h"

/**
 * binary_search - Searches for a value in sorted array of ints
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * 
 * Return: Index where value is located, or -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)	
