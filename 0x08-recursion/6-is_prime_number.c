#include "main.h"

/**
 * st - function to find prime number
 * @i: int variable
 * @j: int variable
 *
 * Description: This function checks for a prime number
 * Return: int
 */

int st(int i, int j)
{
	if (i % j == 0)
		return (0);
	if (j > (i / 2))
		return (1);
	return (st(i, ++j));
}

/**
 * is_prime_number - function that returns a prime number
 * @n: integer
 *
 * Description: This function checkd if a number is prime
 * Return: int
 */

int is_prime_number(int n)
{
	return (st(2, n));
}
