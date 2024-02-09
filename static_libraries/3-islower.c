#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks if the character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	/* ASCII values for lowercase letters are between 97 and 122 */
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
