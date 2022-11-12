#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocating memory using malloc
 * Description: Terminate with 98 if malloc fails
 * @b: unsigned int memory size to allocate
 * Return: pointerto a memory section
 */

void *malloc_checked(unsigned int b)
{
	void *locator;

	locator = malloc(b);

	if (locator == NULL)
	{
		exit(98);
	}
	return (locator);
}
