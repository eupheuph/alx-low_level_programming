#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all strings fro 0 to 9
*Return: Always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf('\n');
	return (0);
}
