#include "main.h"
#include <stdio.h>

/**
 * print_args - Prints all command-line arguments
 * @argc: The argument count
 * @argv: The argument vector
 */
void print_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		int j:
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			putchar(argv[i][j]);
		}
		putchar('\n');
	}
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	print_args(argc, argv);
	return (0);
}
