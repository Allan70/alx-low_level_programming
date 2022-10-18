#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Prints 10 times the alphabet, in lowercase and new line
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int counter;
	int letters;
	for ( counter = 0; counter <= 10; counter++)
	{
		for(letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
