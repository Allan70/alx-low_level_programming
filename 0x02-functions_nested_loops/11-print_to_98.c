#include "main.h"

/**
 * print_to_98 - entry point
 * @n: accepted integer
 * Description: printa all numbers from n to 98
 * Return: no return
 */
void print_to_98(int n)
{
	int count = n;

	while (count < 99)
	{
		printf("%i, ",count);

		count++;
	}
}
