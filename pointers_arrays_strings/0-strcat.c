#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
	temp++;

	while (*src)
	{
	*temp = *src;
	temp++;
	src++;
	}

	*temp = '\0';

	return dest;
}
