#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space
 *
 * @str: String of characters
 * Return: NULL when NULL or a pointer
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;
	while (str[i])
	{
		j++;
		i++;
	}

	a = malloc(sizeof(char) * (j + 1));


	if (a  == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}

	a[j] = '\0';

	return (a);
}
