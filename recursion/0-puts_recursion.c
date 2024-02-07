#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a newline using recursion
 * @s: The string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
