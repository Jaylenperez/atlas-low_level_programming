#include "main.h"

/**
 * print_triangle - Prints a triangle pattern using '#' characters.
 * @size: Size of the triangle.
 *
 * Description: This function prints a triangle pattern made of '#' characters
 * with a given size. If size is 0 or less, only a newline character is printed.
 */
void print_triangle(int size)
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
            // Print spaces to align the triangle
            for (j = size - i; j > 1; j--)
            {
                _putchar(' ');
            }
            // Print '#' characters for the triangle
            for (j = 0; j <= i; j++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
