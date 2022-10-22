#include "main.h"
#include <stdio.h>

/**
 * print_triangle - entry point
 * @size: interger accepted
 * Description: Prints a triangle
 */
void print_triangle(int size)
{
	int pyramid;
	int blocks;
	int spacer;

	for (pyramid = 0; pyramid < size; pyramid++)
	{
		blocks = spacer;

		while (blocks <= size)
		{
			printf(" ");
			blocks++;
		}

		for (spacer = 0; spacer < pyramid; spacer++)
		{
			printf("#");
		}
		printf("\n");
	}
}
