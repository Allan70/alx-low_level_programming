#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Prints the alphabet in lower case then in uppercase followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}

	for (character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
