#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Prints all combinations of 2 digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;
	int ourNumber;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number)
		for (ourNumber = '0'; number <= '9'; number++)
		{
			if (number < ourNumber)
			{
			putchar(ourNumber);
			}

			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
