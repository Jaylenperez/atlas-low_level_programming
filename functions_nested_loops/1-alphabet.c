#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function that prints the alphabet, in lowercase, followed
 * by a new line.
 *
 * Return: None
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
