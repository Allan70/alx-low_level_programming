#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Prints alphabet in lowercase with new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character != 'q' && character != 'e')
		{
			putchar(character);
		}
	}
	putchar('\n');
	return (0);
}
