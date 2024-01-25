#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: Number of times the character '\' should be printed.
 *
 * Description: The function print '\' character n times, preceded by spaces
 * to create a diagonal line. Each diagonal line is followed by a newline
 * If n is 0 or less, only a newline character is printed.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
