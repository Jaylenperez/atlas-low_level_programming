#include "search_algos.h"

/**
 * binary_search - Searches for a value in sorted array of ints
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * 
 * Return: Index where value is located, or -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d, ", array[i]);
	printf("\n");

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
				printf("%d, ", array[i]);
			printf("\n");
			return (mid);
		}

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);
		printf("\n");
	}

	return (-1);
}
