#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatinates two strings
 * @s1: First string
 * @s2: second string
 * Return: Returns concatinated string s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i = 0, j = 0, counter;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	counter = 0;
	while (s1[counter] || s2[counter])
	{
		j++;
		counter++;
	}

	new_string = malloc(sizeof(char) * j);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (counter = 0; s1[counter]; counter++)
	{
		new_string[i++] = s1[counter];
	}

	for (counter = 0; s2[counter]; counter++)
	{
		new_string[i++] = s2[counter];
	}
	return (new_string);
}
