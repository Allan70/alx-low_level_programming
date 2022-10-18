#include "main.h"

/**
 * main - entry point
 * Description: prints alphabet in lowercase and new line
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
