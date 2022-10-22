#include "main.h"

/**
 * print_line - entry point
 * @n: interger enters here
 * Description: Draws a straigh line 
 */
void print_line(int n)
{
	int liner;

	if ( n > 0)
	{

	for (liner = 0; liner < n; liner++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else if ( n <= 0)
	{
		_putchar('\n');
	}
}
