#include <stdio.h>

/**
 * main - entry point
 * Return: void
 */

int main(void)
{
	int maximum;
	int minimum;

	maximum = 100;
	minimum = 1;

	while (minimum <= maximum)
	{
		if (minimum % 3 == 0 && minimum % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (minimum % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (minimum  % 5 == 0)
		{
			if (minimum < maximum)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
			else
			{
				printf("%i ", minimum);
			}

			minimum++;
		}
	}
		
		printf("\n");
		return (0);
}
