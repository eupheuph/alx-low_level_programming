#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int variable
 * @y: int variable
 *
 * Description: This function returns tha value of x raised to the power of y
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
