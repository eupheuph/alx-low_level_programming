#include <stdlib.h>
#include <stdio.h>

/**
*main - prints all strings fro 0 to 9
*Return: Always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
