#include "main.h"
#include <stdio.h>

/**
 * count_args - Counts the number of arguments passed
 * @argc: The argument count
 *
 * Return: The number of arguments passed
 */
int count_args(int argc)
{
	return (argc - 1);
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
	int num_args;

	(void)argv;

	num_args = count_args(argc);
	printf("%d\n", num_args);

	return (0);
}
