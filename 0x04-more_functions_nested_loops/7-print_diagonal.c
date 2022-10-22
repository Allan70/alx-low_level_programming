#include "main.h"

/**
 * print_diagonal - entry point
 * @n: integer enters here
 * Description: Draws a diagonal line on the terminal
 */

void print_diagonal(int n)
{
	int spacer;
	
	for (spacer = 0; spacer <= n; spacer++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else if (n > 0)
		{
			while (spacer > 0)
			{
				_putchar(' ');
				spacer--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}	
