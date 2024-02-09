#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills the first n bytes of the memory area pointed to by
 * with the constant byte b.
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
