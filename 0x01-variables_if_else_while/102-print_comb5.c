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

	for (number1 = 48; number1 <= 57; number1++)
	{
		for (number2 = 48; number2 < 57; number2++)
		{
			for (number3 = 48; number3 <= 57; number3++)
			{
				for (number4 = 48; number4 <= 57; number4++)
				{
					if ((( number3 + number4) > (number1 + number2) && number3 >= number1)||number1 < number2)
					{	
					putchar(number1);
					putchar(number2);
					putchar(' ');
					putchar(number3);
					putchar(number4);
					if (number1 + number2 + number3 + number4 == 227 && number1 == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
