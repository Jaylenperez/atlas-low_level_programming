#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: The string to append to
 * @src: The string to append
 * @n: The maximum number of bytes to append from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Copy up to n characters from src to dest */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add a null terminator to dest */
	dest[i] = '\0';

	return dest;
}
