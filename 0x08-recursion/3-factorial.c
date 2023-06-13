#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: int variable
 *
 * Description: This function finds the factorial of a given number
 * Return: int
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n  < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
