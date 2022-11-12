#include "main.h"
#include <stdlib.h>

/**
 * get_string_length - find length of a given string
 * @s: string to be looked at
 * Return: Length of strings
 */
int get_string_length(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return index;
}

/**
 * string_nconcat - concatinate 2 strings, with n bytes
 * @s1: first string
 * @s2: Second string 
 * @n: bytes to be included
 * Return: pointer (on success) NULL (failiure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int string_length, index, counter;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if ( s2 == NULL)
	{
		s2 = "";
	}

	string_length = (unsigned int)get_string_length(s1);
	p = malloc((string_length + n + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	index = 0;
	counter = 0;
	while (index < (int)(string_length + n))
	{
		if (index < string_length)
		{
			p[index] = s1[index];
		}
		else
		{
			p[index] = s2[counter++];
		}
		index++;
	}
	p[index] = '\0';

	return (p);
}
