#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Return: None.
 */
void times_table(void)
{
	int i;
        int j;
        int result;

	for (i = 0; i <= 9; i++)
	{
		for (j =0; j <= 9; j++)
		{
			result = i * j;

			/* Print the result with proper formatting */
			if (j == 0)
				_putchar(result + '0');
			else
			{
				_putchar(',');
				_putchar(' ');

				/**
			 	* Adjust spacing for single-digit and double-
			 	* digit results
			 	*/

				if (result < 10)
					_putchar(' ');
				else
					_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
