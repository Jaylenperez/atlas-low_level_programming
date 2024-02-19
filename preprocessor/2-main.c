#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 *
 * @c: The character to be written
 *
 * Return: On success, 1 is returned. On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_filename - Prints the name of the current source file followed
 * by a new line.
 */
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
