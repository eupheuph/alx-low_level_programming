#include "main.h"

/**
 *checks for lowercase character
 *if char is lowercase return 1
*/

int _islower(int c)
{
	if (c >=97 && c<= 122)
	{
		return (1);
	}
	return (0);
}
