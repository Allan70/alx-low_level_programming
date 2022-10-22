#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Prints 1-100 with a new line \n
 * Multiples of three prints 'Fizz' instead of number.
 * Multiples of five prints 'Buzz' instead of number.
 * For multiples of both it prints FizzBuzz.
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
			printf("%i ", looper);
		}

	}

	printf('\n');

	return (0);
}

