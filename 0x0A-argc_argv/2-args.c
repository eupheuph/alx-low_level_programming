#include <stdio.h>

/**
 * main - entry point
 * Description: prints all command line arguments
 * @argc: the count of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
