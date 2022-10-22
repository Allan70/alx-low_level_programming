#include "main.h"

/**
 * print_square - entry point
 * @size: input integer
 * Description: Prints a square with new line
 */
void print_square(int size)
{
	int length;
	int width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (length = 0; length < size; length++)
	{
		for (width = 0 ; width < size; width++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
}
