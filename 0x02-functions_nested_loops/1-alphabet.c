#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: prints alphabet in lowercase and new line
 * Return: Always 0 (success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
