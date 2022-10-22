#include <stdio.h>

/**
 * main - entry point
 * Description: Prints 1-100 with a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
	int looper;

	for (looper = 1; looper <= 100; looper++)
	{
		if (looper % 3 == 0)
		{
			printf("Fizz");
		}
		else if (looper % 5 == 0)
		{
			printf("Buzz");
		}
		else if  (looper % 3 == 0 && looper % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", looper);
		}
		printf(" ");
	}

	printf("\n");
	return (0);
}

