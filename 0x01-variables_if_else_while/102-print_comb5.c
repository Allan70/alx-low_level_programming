#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Prints all combinations of 2 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int number1;
	int number2;
	int number3;
	int number4;

	for (number1 = '0'; number1 <= '9'; number1++)
	{
		for (number2 = '0'; number2 < '9'; number2++)
		{
			for (number3 = '0'; number3 <= '9'; number3++)
			{
				for (number4 = '0'; number4 <= '9'; number4++)
				{
					putchar(number1);
					putchar(number2);
					putchar(' ');
					putchar(number3);
					putchar(number4);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
