#include "main.h"

/**
 *checks for uppercase and lower case letters
 *return 1 
 *else return 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
