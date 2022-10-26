#include "main.h"

/**
 * rev_string - entry point
 * @s: string to be reversed
 * Description: Function reverses a string
 */
void rev_string(char *s)
{
	int stringL, indexer, halfer;
	char temporary;

	for (stringL = 0; s[stringL] != '0'; stringL++);

	indexer = 0;
	halfer = stringL / 2;

	while (halfer--)
	{
		temporary = s[stringL - indexer - 1];
		s[stringL - indexer - 1] = s[indexer];
		s[i] = temporary;
		indexer++;
	}

}
