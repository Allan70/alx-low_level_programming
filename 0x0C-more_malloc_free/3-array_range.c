#include <stdlib.h>
#include "main.h"

/**
 * array_range - creating an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: Returns a pointer to a new array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int index, length;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;

	pointer = malloc(sizeof(int) * length);

	if (pointer == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index <= length)
	{
		pointer[index] = min++;
	}

	return (pointer);
}
