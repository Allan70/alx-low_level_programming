#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: printnumbers 0 - 9
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
		{
			continue;
		}
		else
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
