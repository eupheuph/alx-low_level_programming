#include "main.h"

/**
 *char *_strcpy - copies the string pointed to by scr
 *@dest: copy to
 *@src: copy from
 *
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
