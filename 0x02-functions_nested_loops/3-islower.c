#include "main.h"

/**
 * _islower - Entry point
 * Description: Checks for lowercase characters
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
