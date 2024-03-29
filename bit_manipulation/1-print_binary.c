#include <stddef.h>
#include <unistd.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit_printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			bit_printed = 1;
		}
		else if (bit_printed)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
