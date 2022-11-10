#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: The size of the array
 * @c: the characters to be initialized
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size = 0)
	{
		return (NULL);
	}

	char *arr;

	arr = malloc(sizeof(char) * size);
	return (*arr);
}
