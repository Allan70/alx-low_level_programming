#include "main.h"

/**
 * _pow_recursion - returns the value of x power y
 * @x: integer to power
 * @y: integer to power to.
 * Return: power of x unless y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	int answer = x;

		
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	answer *= _pow_recursion(x, y - 1);
	return (answer);
}
