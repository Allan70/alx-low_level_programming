#include "main.h"

/**
 * _memset - Fills the first n bytes if the memory area pointed to
 * @s: Pointer to memory area being filled
 * @b: The character to fill the area
 * @n: Number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
	}

	return (s);
}
