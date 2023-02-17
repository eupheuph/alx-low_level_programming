#include <stdio.h>
#include <stdlib.h>

/**
*main - prints alpha in reverse order
*Return: Always 0
*/
int main(void)
{
	char rv;

	for (rv = 'z'; rv >= 'a'; rv--)
	{
		putchar(rv);
	}
	putchar('\n');
	return (0);
}
