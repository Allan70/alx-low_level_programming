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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
	for (pyramid = 0; pyramid < size; pyramid++)
	{
		blocks = spacer;

		while (blocks <= size)
		{
			_putchar(' ');
			blocks++;
		}

		for (spacer = 0; spacer < pyramid; spacer++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
