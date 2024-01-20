#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Numbers are separated by ', ', printed in ascending order.
 * Only putchar is used, and all the code is in the main function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');

		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
