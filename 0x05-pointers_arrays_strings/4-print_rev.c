#include "main.h"

/**
 * print_rev - entry point
 * @s: character value to be worked on
 * Description: Prints a string in reverse
 */
void print_rev(char *s)
{
	char holder;
	char counter;

	for (counter = 0; *s[counter] != '\0'; counter++)
	{
		holder[counter] = s[counter];
	}

	while (counter > 0)
	{
		_putchar(holder[counter]);
		counter--;
	}
}
