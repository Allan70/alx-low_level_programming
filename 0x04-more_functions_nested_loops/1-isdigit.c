#include "main.h"
#include <ctype.h>

/**
 * _isdigit - entry point
 * @c: integer accepted
 * Description: checks for a digit 0 - 9
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
