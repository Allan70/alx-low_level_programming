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

	//first number
	for (number = '0'; number <= '9'; number++)
	{
		// get first number /10
		putchar(number)

		for (ourNumber = '0'; number <= '9'; number++)
		{
			if (number < ourNumber)
			{
			// get second number %10
			putchar(ourNumber);
			}

			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
