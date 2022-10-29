#include "main.h"

/**
 * *_strcat - concatinates two strings
 * @dest: string to be concatinated to
 * @str: string to concatinate
 * Description: A function that concatinates two strings.
 * Return: Returns a pointer resulting to the string dest.
 */
char *_strcat(char *dest, char *src)
{
	int holder = 0;
	int length = 0;

	while (dest[holder++])
	{
		length++;
	}

	holder--;

	while (src[holder++])
	{
		dest[length++] = src[index];
	}

	return (dest);
}
