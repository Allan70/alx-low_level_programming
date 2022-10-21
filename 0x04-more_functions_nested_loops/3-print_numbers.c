#include "main.h"

/**
 * print_numbers - entry point
 * Description: Prints 0 - 9 with a new line
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
