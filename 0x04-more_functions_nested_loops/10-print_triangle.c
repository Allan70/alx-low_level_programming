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

	pyramid = 1;

	while (pyramid <= size && size > 0)
	{
		blocks = 0;
		while (blocks < size - 1)
		{
			_putchar(' ');
			blocks++;
		}
		blocks = 0;
		while (blocks < pyramid)
		{
			_putchar('#');
			blocks++;
		}

		_putchar('\n');
		pyramid++;
	}

	if (pyramid == 1)
	{
		_putchar('\n');
	}
	
}
