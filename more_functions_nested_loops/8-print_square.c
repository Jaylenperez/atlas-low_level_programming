#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square of a given size.
 * @size: Size of the square.
 *
 * Description: The function prints a square of a given size.
 * If size is 0 or less, only a newline character is printed.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
