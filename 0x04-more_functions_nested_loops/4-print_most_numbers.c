#include "main.h"
#include "_putchar.c"

/**
 *print_most_numbers -prints numbers 0-9
 *does not print 2 & 4
 *
 * return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		_putchar(c);
	}
	_putchar('\n');
}
