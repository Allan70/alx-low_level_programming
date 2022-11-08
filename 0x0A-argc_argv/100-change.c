#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 for Error
 */
int main(int argc, char *argv[])
{
	int t, c, i;

	int cent[] = {25, 10, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);
	c = 0;
	i = 0;

	while (t > 1)
	{
		while (i < (int)sizeof(cent[i]))
		{
			if (t >= cent[i])
			{
				c += t / cent[i];
				t = t % cent[i];
			}

			i++;
		}
	}

	if (t == 1)
	{
		c++;
	}

	printf("%d\n", c);
	return (0);
}
