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
	int *pointer;
	unsigned int index;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < nmemb)
	{
		pointer[index] = 0;
		index++;
	}

	return (pointer);
}
