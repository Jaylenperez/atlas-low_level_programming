#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse followed by a new line
 * Only putchar is used, and all the code is in the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
		putchar(letter--);

	putchar('\n');

	return (0);
}
