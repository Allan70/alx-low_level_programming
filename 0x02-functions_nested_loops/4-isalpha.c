#include "main.h"

/**
 * _isalpha - entry point
 * @c: The interger value it receives
 * Description: checks for alphabet
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	int cUpper;
	int cLower;

	for (cUpper = 'A'; cUpper <= 'Z'; cUpper++)
	{
		if (c == cUpper)
		{
			return (1);
		}
	}
	for (cLower = 'a'; cLower <= 'z'; cLower++)
	{
		if (c == cLower)
		{
			return (1);
		}
	}
	return (0);
}
