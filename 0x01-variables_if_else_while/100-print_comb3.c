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

	for (number = '0'; number < '9'; number++)
	{
		for (ourNumber = '0'; ourNumber <= '9'; ourNumber++)
		{
			if (number < ourNumber)
			{
			putchar(number);
			putchar(ourNumber);
				if (number == '8' && ourNumber == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
