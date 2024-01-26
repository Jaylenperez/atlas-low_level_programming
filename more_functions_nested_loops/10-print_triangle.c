#include "main.h"

/**
 * print_triangle - Prints a triangle pattern using '#' characters.
 * @size: Size of the triangle.
 *
 * Description: This function prints a triangle pattern made of '#' characters
 * with a given size. If size is 0 or less, only a newline character is printed
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, space, hash;

		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				_putchar(' ');
			}

			for (hash = 0; hash < row + 1; hash++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
