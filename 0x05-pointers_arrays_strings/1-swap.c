#include "main.h"

/**
 *swap_int - swaps the value of two integers
 *@a: integer to be swapped
 *@b: integer to be swapped
 *
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
