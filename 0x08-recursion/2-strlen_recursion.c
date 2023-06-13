#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char variable
 *
 * Description: This function returns the length of a string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	{
		if (*s == '\0')
			return (0);
		return (i + _strlen_recursion(s + 1));
	}
}
