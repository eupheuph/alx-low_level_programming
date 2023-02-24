#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 *print_most_numbers -prints numbers 0-9
 *does not print 2 & 4
 *
 * return: void
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
	{
		if (c != 52)
	{
			_putchar(c);
	}
	}
	}
	 _putchar('\n');
}

