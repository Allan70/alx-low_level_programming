#include "main.h"

/**
 * print_rev - entry point
 * @s: character value to be worked on
 * Description: Prints a string in reverse
 */
void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}

	while (*s > 0)
	{
		_putchar(*s);
		s--;
	}
}
