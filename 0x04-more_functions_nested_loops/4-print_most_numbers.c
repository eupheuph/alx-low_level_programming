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
	int x = 0;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		{
			continue;
		}
		else
		{
		_putchar(x + '0');
		}
	}
	_putchar('\n');
}
