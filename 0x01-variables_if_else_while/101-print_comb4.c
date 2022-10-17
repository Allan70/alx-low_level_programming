#include <stdio.h>
#include <unistd.h>

/**
 * main- entry point
 * Description: prints different combinations of 3 digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int number1;
	int number2;
	int number3;

	for (number1 = '0'; number1 < '8'; number1++)
	{
		for (number2 = '0'; number2 < '9'; number2++)
		{
			for (number3 = '0'; number3 <= '9'; number3++)
			{
				if (number1 < number2)
				{
					if (number2 < number3)
					{
						putchar(number1);
						putchar(number2);
						putchar(number3);
						if (number1 == '7' && number2 == '8' &&  number3 == '9')
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
		}
	}


	return (0);
}
