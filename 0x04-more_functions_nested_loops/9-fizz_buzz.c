#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: void
 */

int main(void)
{
	int looper = 1;

	while (looper <= 100)
	{
		if(looper % 3 == 0&& looper % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (looper % 3 == 0)
		{
			printf("Fizz");
		}
		else if (looper % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", looper);
		}
		if (looper != 100)
		{
			_putchar(' ');
		}

		looper++;
	}
	_putchar('\n');
	return (0);
}
