#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers of base 10 followed by a new line
 * No variables of type char are used, and only putchar is used twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
		putchar(digit++ + '0');

	putchar('\n');

	return (0);
}
