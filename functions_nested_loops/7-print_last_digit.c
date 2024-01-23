#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Ensure n is positive or zero */
	if (n < 0)
		n = -n;

	/* Extract the last digit */
	last_digit = n % 10;

	/* Print the last digit */
	_putchar('0' + last_digit);

	/* Return the value of the last digit */
	return (last_digit);
}
