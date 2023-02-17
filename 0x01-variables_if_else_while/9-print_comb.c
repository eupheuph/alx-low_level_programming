#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all combinations of single digits
*separated by commas
*Return: Always 0
*/
int main(void)
{
	int n;

	for (num = 48; num < 58; n++)
		putchar(n);
	if (n != 57)
	{
		putchar(',');
		putchar('');
	}
	 putchar('\n');
	return (0);
}
