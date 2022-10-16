#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Displays the lowercase alphabet\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
