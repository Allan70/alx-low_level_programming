#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: The size of the array
 * @c: the characters to be initialized
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < size)
	{
		arr[index] = c;
		index++;
	}

	return (arr);
}
