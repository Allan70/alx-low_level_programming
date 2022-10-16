#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Prints all base 10 single digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
