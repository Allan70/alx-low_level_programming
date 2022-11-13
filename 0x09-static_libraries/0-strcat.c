#include "main.h"

/**
 * _strcat - concatenates @str to @dest
 * @src: the source string to append to @dest
 * @dest: the destination string to concatinate
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_size = 0;

	while (dest[index++])
	{
		dest_size++;
	}

	index = 0;
	while (src[index])
	{
		dest[dest_size++] = src[index];
	}
	return (dest);
}
