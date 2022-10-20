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
		if (count == 98)
		{
			printf("%i ", count);
		}
		else if (count > 98 || count < 0)
		{
			while (count > 97)
			{
				if (count == 98)
				{
					printf("%i ", count);
				}
				else
				{
					printf("%i, ", count);
				}
				
				count--;
			}

			while (count < 99)
			{
				if (count == 98)
				{
					printf("%i ", count);
				}
				else
				{
					printf("%i, ", count);
				}

				count++
			}
				
		}
		else
		{
			printf("%i, ", count);
		}

		count++;
	}
}
