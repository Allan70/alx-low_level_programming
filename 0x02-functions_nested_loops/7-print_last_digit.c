#include "main.h"

/**
 * print_last_digit - entry point
 * @i: Take in an integer
 * Description: Prints the last digit of a number
 * Return: Always 0 (success)
 */
int print_last_digit(int i)
{
	int lastd;
	int counter;

	lastd = i % 10;
	for (counter = 0; counter <= 9; counter++)
	{
		if (counter == lastd)
		{
			_putchar(lastd);
			return (_putchar(lastd));
		}	
	}
}
