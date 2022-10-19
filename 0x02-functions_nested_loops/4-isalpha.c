#include "main.h"

/**
 * _isalpha: entry point
 * Description: checks for alphabetic character
 * @c: The character value it receives
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	int characterUppercase;
	int characterLowercase;

	for (characterUppercase = 'A'; characterUppercase <= 'Z'; character++)
	{
		if (c == characterUppercase)
		{
			return (1);
		}
	}
	for (characterLowercase = 'a'; characterLowercase <= 'z'; characterLowercase++)
	{
		if (c == characterLowercase)
		{
			return (1);
		}
	}
	return (0);
}
