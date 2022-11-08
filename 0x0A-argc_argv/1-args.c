#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers of arguments
 *
 * @argc: argument counter
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int tmp;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (tmp = 0; *argv; tmp++)
		{
			argv++;
		}
		printf("%d\n", tmp - 1);
	}

	return (0);
}
