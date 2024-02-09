#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - recursive helper function to check if a number is prime
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
        if (i == n)
                return (1);
        else if (n % i == 0)
                return (0);
        else
                return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_helper(n, 2));
}
