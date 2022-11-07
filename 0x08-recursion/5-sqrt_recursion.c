#include "main.h"

int _sqrt_recursion(int n);
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root 
 * @n: interger to be squared
 * Return: returns square root of the number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	
	if (n == 1)
	{
		return (1);
	}

	return _sqrt(n, i);
}

int _sqrt(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}

	if (i == n / 2)
	{
		return (-1);
	}
	
	return (_sqrt(n, i + 1));
}
