#include "main.h"

/**
 * con - returns the natural square root of a number
 * @n: int variable
 * @i: int variable
 *
 * Description: This function returns the natural square root of a number
 * Return: int
 */

int con(long int n, long int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
		return (i);
	return (con(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int variable
 *
 * Description: This function returns the natural square root of a number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (con(n, 1));
}
