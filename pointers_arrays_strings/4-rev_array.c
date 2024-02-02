#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the contents of an array of integers
 * @a: The array of integers to reverse
 * @n: The number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[end];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
