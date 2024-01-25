#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character '_' should be printed.
 *
 * Description: The function prints '_' character n times.
 * character. If n is 0 or less, only a newline character is printed.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
