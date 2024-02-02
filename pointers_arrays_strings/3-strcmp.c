#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: Negative if s1 is less than s2,
 *         Positive if s1 is greater than s2,
 *         Zero if s1 is equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
