#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabet, in lowercase,
 * followed by a new line, repeated 10 times
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
	int repetition = 0;

	while (repetition < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');

		repetition++;
	}
}
