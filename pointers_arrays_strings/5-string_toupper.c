#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: The string to be converted
 *
 * Return: A pointer to the converted string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= ('a' - 'A');
		ptr++;
	}

	return (str);
}
