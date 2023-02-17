#include <stdio.h>
#include <stdlib.h>

/**
*main - prints alpha in lower case except q and e
*include a new line
*Return: Always 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
