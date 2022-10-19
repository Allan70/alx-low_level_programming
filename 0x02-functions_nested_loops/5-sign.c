#include "main.h"

/**
 * print_sign(int n) - entry point
 * Description: Prints the sign of a number
 * @c - The integer value it receives.
 * Return: Returns 1 if greater than zero,0 if it is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
