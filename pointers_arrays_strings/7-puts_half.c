#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = (length + 1) / 2;

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
