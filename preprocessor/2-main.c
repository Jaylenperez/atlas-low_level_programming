#include <unistd.h>

/**
 * print_filename - Prints the name of the current source file followed
 * by a new line.
 */
int _putchar(char c);

void print_filename(void)
{
	char *filename = __FILE__;

	while (*filename != '\0')
	{
		write(1, filename, 1);
		filename++;
	}
	
	_putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	print_filename();
	return (0);
}
