#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Print lowercase alphabets in reverse
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
