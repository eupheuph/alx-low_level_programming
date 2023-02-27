#include "main.h"

/**
 *print_array - prints all the elements of the array
 *@a: array name
 *@n: number of elements to be printed
 *Return: a and n
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
