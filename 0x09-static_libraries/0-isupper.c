#include "main.h"

/**
 * _isupper - checks whether a character is uppercase
 * @c: carrier interger variable
 * Return: 1 as true 0 as false
 */

int _isupper(int c)
{
	if (c >= 6 && c <= 90)
	{
		return (1);
	}
	return (0);
}
