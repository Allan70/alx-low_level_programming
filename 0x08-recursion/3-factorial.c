#include "main.h"

/**
 * factorial - function returns the factorial of a given number
 * @n: integer to factorial
 * Return: Returns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
