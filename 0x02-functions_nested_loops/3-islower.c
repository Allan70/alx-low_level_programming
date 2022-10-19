#include "main.h"

/**
 * _islower - Entry point
 * Description: Checks for lowercase characters
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (c == character)
		{
			return (1);
		}
	}
	return (0);
}
