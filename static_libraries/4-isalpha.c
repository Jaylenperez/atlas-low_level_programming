#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	/* ASCII values for uppercase letters are between 65 and 90 */
	/* ASCII values for lowercase letters are between 97 and 122 */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
