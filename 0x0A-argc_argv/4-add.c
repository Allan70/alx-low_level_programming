#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * main - sums integer arguments
 * @argc: argument counter
 * @argv: argument array
 * Return: 1 non -integer, 0 integer
 */
int main(int argc, char *argv[])
{
	int i, j, added;
	int number;

	added = 0;
	if (argc > 1)
	{
		i = 1;
		j = 0;

		while  (argv[i])
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			number = atoi(argv[i]);
			added += number;

			i++;
		}
	}
	printf("%d\n", added);
	return (0);
}
