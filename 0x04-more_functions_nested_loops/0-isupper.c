#include "main.h"
#include <ctype.h>

/**
 * _isupper - entry point
 * @c: integer taken in
 * Description: Checks for uppercase character
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
