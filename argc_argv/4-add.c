#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if str represents a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	if (*str == '\0')
		return (0);

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * add_numbers - Adds positive numbers passed as arguments
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: The sum of positive numbers, or 0 if no numbers are passed,
 * on error
 */
int add_numbers(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	return (sum);
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int result;

	result = add_numbers(argc, argv);

	if (result == 0)
		printf("0\n");
	else if (result != 1)
		printf("%d\n", result);

	return (result != 0);
}
