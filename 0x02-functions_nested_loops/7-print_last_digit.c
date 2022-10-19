
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

	lastd = i % 10;
	_putchar(lastd);
	return (0);
}
