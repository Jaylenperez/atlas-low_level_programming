#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode.
 *
 * Return: Pointer to the resulting encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char leet_table[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'},
				{'l', 'L'}};
	char leet_replacements[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == leet_table[j][0] || s[i] == leet_table[j][1])
			{
				s[i] = leet_replacements[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
