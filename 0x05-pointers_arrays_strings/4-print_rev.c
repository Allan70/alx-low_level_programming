#include "main.h"

/**
 * print_rev - entry point
 * @s: character value to be worked on
 * Description: Prints a string in reverse
 */
void print_rev(char *s)
{
	char starter = *s - 1;

	while (*s != '\0')
	{
		s++;
	}

	while (*s != (starter))
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
