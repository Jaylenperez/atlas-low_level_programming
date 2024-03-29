#include "main.h"
#include <stdio.h>

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural sr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - recursive helper function to find the square root
 * @n: the number to find the square root of
 * @i: the current divisor to check
 *
 * Return: the natural square root of n, or -1 if n does not have a natural sr
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}
