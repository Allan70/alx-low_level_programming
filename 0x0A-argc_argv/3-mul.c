#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argumen count
 * @argv: argument vector
 * Return: 1 when no err
 */
int main(int argc, char *argv[])
{
	int k,j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (k = 1; k < 3; k++)
		{
			j *= atoi(argv[k]);
		}

		printf("%d\n", j);
	}

	return (1);
}
