#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates emory for an array of a given number of elements
 * @nmemb: elements to be added
 * @size: size of each element to be added
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *bucket;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(size * nmemb);

	if (memory == NULL)
	{
		return (NULL);
	}

	bucket = memory;

	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}
	return (memory);
}
