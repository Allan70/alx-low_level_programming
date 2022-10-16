#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Prints base 16 numbers in lowercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
