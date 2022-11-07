#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns string length
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	unsigned int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	
	return (length);
}
