#include "main.h"

/**
 * print_diagonal - entry point
 * @n: integer enters here
 * Description: Draws a diagonal line on the terminal
 */

void print_diagonal(int n)
{
	int spacer;
	int breaker;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (n > 0)
		{
		for (spacer = 0; spacer < n; spacer++)
		{
			for (breaker = 0; breaker <= spacer; breaker++)
			{
			while (breaker < spacer)
			{
				_putchar(' ');
				breaker++;
			}
			_putchar('\\');
			_putchar('\n');
			}
		}
		}
}
