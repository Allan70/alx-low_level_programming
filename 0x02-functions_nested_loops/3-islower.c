#include "main.h"

/**
 * _islower - Entry point
 * Description: Checks for lowercase characters
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (sizeof(c) == 1 || sizeof(c) !=  0 )
		if (islower(_putchar(c)))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
